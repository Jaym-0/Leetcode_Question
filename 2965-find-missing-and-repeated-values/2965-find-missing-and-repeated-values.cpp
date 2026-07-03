class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int size = grid.size();
        int n = size * size;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                mp[ grid[i][j] ]++;
            }
        }

        for(auto x : mp){
            if(x.second == 2){
                ans.push_back(x.first);
                break;
            }
        }
        int gridSum = 0;
        for(auto x : mp){
            gridSum += x.first;
        }
        int totalSum = (n *(n + 1)) /2;
        ans.push_back(totalSum - gridSum);
        return ans;


    }
};