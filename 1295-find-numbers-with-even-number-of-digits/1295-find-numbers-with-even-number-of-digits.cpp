class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        int size = nums.size();

        for(int i = 0; i < size; i++){
            string s = to_string(nums[i]);
            if((s.length()) % 2 == 0){
                ans++;
            }
        }
        return ans;
    }
};