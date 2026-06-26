class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxFreq = 0;
        for(int x : nums){
            mp[x]++;
            maxFreq = max(mp[x],maxFreq);
        }
        int ans = 0;
        for(auto &freq : mp){
            if(freq.second == maxFreq){
                ans += freq.second;
            }
        }
        return ans;
    }
};