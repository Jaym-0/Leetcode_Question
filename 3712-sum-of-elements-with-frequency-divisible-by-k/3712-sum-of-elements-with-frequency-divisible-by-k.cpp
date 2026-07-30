class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(int i : nums){
            mp[i]++;
        }

        for(auto x : mp){
            if(x.second %  k == 0){
                ans += (x.first * x.second);
            }
        }
        return ans;
    }
};