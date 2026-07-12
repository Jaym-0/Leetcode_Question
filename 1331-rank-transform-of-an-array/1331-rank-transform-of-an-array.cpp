class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;
        vector<int> temp(arr.begin(),arr.end());
        sort(arr.begin(),arr.end());
        int rank = 1;
        for(int i = 0; i < arr.size(); i++){
            if (!mp.contains(arr[i])) {
            mp[arr[i]] = rank++;
            }
        }
        vector<int> ans;
        for(auto x : temp){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};