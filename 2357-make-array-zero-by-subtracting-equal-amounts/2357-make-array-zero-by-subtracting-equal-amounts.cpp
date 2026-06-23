class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(),nums.end());
        for(int i= 0; i < nums.size(); i++){
            int el = nums[i];
            if(el > 0){
                count++;
                for(int j = i; j < nums.size(); j++){
                    if(nums[j] > 0){
                        nums[j] -= el;
                    }
                }
            }
        }
        return count;
    }
};