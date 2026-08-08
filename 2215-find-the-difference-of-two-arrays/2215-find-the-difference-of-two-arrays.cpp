class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        vector<int> first;
        vector<int> second;
        for(int i : s1){
            int c= 0;
            for(int j : s2){
                if(i == j){
                    c++;
                }
            }
            if(c == 0){
                first.push_back(i);
            }
        }
        for(int i : s2){
            int c= 0;
            for(int j : s1){
                if(i == j){
                    c++;
                }
            }
            if(c == 0){
                second.push_back(i);
            }
        }
        return {first,second};
    }
};