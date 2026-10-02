class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        int ans = INT_MIN;
        int i = 0, j = nums.size() - 1;
        while(i < j){
            temp.push_back(nums[i] + nums[j]);
            i++;
            j--;
        }
        for(int i : temp){
            ans = max(ans,i);
        }
        return ans;
    }
};