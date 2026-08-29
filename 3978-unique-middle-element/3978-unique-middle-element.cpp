class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int size = nums.size();
        int mid = nums[size / 2];
        int count = 0;
        for(int i : nums){
            if(i == mid){
                count++;
            }
        }
        if(count >= 2){
            return false;
        }
        else{
            return true;
        }
    }
};