class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans = -1;
        int size = nums.size();
        for(int i = 0; i <= size - k; i++){
            set<int> st;
            for(int j = i; j < i + k; j++){
                st.insert(nums[j]);
            }
            for(int i : st){
                mp[i]++;
            }
        }
        for(auto i : mp){
            if(i.second == 1){
                ans = max(ans, i.first);
            }
        }
        return ans;
    }
};