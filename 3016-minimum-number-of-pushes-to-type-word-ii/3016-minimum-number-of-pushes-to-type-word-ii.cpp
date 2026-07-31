class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;
        int ans = 0;
        for(auto i : word){
            mp[i]++;
        }
        vector<int> count;
        for(auto i : mp){
            count.push_back(i.second);
        }
        sort(count.begin(),count.end(), greater<int>());
        for(int i = 0; i < count.size(); i++){
            ans += (i / 8 + 1) *  count[i];
        }
        return ans;
    }
};