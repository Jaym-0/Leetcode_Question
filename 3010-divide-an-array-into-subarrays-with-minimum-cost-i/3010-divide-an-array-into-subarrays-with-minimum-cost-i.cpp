class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans = nums[0];
        int mini = INT_MAX;
        int m2 = INT_MAX;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < mini){
                m2 = mini;
                mini = nums[i];
            }
            else if(nums[i] < m2){
                m2 = nums[i];
            }
        }
        ans += m2 + mini;
        return ans;

    }
};