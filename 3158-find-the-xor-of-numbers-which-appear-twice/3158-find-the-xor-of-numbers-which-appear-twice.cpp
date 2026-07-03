class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> arr;
        int ans = 0;
        for(int x: nums){
            mp[x]++;
        }

        for(auto x : mp){
            if(x.second == 2){
                arr.push_back(x.first);
            }
        }
        for(int x : arr){
            ans ^= x;
        }
        return ans;
    }
};