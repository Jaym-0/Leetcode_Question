class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i = 0; i < k; i++){
            ans += nums[i];
        }
        for(int i = nums.size() - k; i < nums.size(); i++){
            ans -= nums[i];
        }
        return abs(ans);
    }
};