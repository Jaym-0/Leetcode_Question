class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            unordered_set<int> prefix , suffix;
            for(int j = 0; j <= i; j++){
                prefix.insert(nums[j]);
            }
            for(int j = i + 1; j < size; j++){
                suffix.insert(nums[j]);
            }
            ans.push_back(prefix.size() - suffix.size());
        }
        return ans;
    }
};