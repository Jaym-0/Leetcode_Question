class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = INT_MIN;
        for(auto i : accounts){
            int num = 0;
            for(int j : i){
                num += j;
            }
            maxi = max(maxi, num);
        }
        return maxi;
    }
};