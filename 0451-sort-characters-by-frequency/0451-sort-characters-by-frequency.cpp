class compare{
public:
    bool operator()(const pair<char,int>&a, const pair<char,int>&b){
        return a.second > b.second;
    }
};

class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        unordered_map<char,int> mp;
        for(auto c : s){
            mp[c]++;
        }
        vector<pair<char,int>> temp (mp.begin(),mp.end());
        sort(temp.begin(),temp.end(),compare());
        for(int i= 0; i < temp.size(); i++){
            for(int j = 1; j <= temp[i].second; j++){
                ans += temp[i].first;
            }
        }
        return ans;
    }
};