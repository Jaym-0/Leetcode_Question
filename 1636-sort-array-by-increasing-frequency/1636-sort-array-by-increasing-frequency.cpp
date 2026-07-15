class compare{
public:
    bool operator()(const pair<int,int> &a,const pair<int,int> &b){
        if(a.second == b.second){
            return a.first > b.first;
        }
        return a.second < b.second;
    }
};
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        vector<pair<int, int>> temp(mp.begin(),mp.end());
        sort(temp.begin(),temp.end(),compare());
        vector<int> ans;
        for(int i = 0; i < temp.size(); i++){
            for(int j = 1; j <= temp[i].second; j++){
                ans.push_back(temp[i].first);
            }
        }
        return ans;
    }
};