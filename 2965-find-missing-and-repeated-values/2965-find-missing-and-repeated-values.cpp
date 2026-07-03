class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> arr;
        vector<int> ans;
        int size = grid.size();
        int n = size;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin(), arr.end());
        int arrSize = arr.size();
        for(int i = 1; i < arrSize; i++){
            if(arr[i - 1] == arr[i]){
                ans.push_back(arr[i]);
                break;
            }
        }
        int arrSum = 0;
        for(int i = 0; i < arrSize; i++){
            arrSum += arr[i];
        }
        int totalSum = (arrSize * (arrSize + 1)) / 2;
        int dup = ans[0];
        int miss = totalSum - (arrSum - dup);
        ans.push_back(miss);
        return ans;
    }
};