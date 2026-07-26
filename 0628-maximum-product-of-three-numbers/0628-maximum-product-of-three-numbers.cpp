class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int ans  = INT_MIN;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i < size; i++){
            int temp  = nums[i] * nums[(i + 1) % size] * nums[(i + 2) %  size];
            ans = max(ans, temp);
        }
        return ans;
    }
};