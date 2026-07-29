class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ORofElement = 0;
        for(int i : nums){
            ORofElement |= i;
        }
        int ans = pow(2, nums.size() - 1) * ORofElement;
        return ans;
    }
};