class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i = 0; i < row; i++){
            int minCol = 0;

            for(int j = 0; j < col; j++){
                if(matrix[i][minCol] > matrix[i][j]){
                    minCol = j; 
                }
            }
            bool isMax = true;
            for(int k = 0; k < row; k++){
                if(matrix[i][minCol] < matrix[k][minCol]){
                    isMax = false;
                    break;
                }
            }
            if(isMax){
                ans.push_back(matrix[i][minCol]);
            }
        }
        return ans;
    }
};