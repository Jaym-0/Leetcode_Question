class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int size = 2;
        vector<int> ans;
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_set<int> s3(nums3.begin(), nums3.end());

        unordered_map<int, int> mp;

        for (int x : s1) mp[x]++;
        for (int x : s2) mp[x]++;
        for (int x : s3) mp[x]++;

        for(auto x : mp){
            if(x.second >= size){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};