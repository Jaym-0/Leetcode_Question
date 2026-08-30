class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int size = nums.size();
        int minIdx = 0;
        int maxIdx = 0;
        int mini = nums[0];
        int maxi = nums[0];
        for(int i = 0; i < size; i++){
            if(nums[i] < mini){
                mini = nums[i];
                minIdx = i;
            }
        }
        for(int i = 0; i < size; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                maxIdx = i;
            }
        }
        if(minIdx > maxIdx){
            swap(minIdx, maxIdx);
        }
        int left = max(minIdx, maxIdx) + 1;
        int right = size - min(minIdx, maxIdx);
        int both = minIdx + 1 + (size - maxIdx);
        return min({left, right, both});
    }
};