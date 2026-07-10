class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> arr;
        int left = 0 ,up = 0;
        int right = matrix[0].size() - 1;
        int down = matrix.size() - 1;
        while(left <= right && up <= down){
            for(int i = left; i <= right; i++){
                arr.push_back(matrix[up][i]);
            }
            up++;
            for(int i = up; i <= down; i++){
                arr.push_back(matrix[i][right]);
            }
            right--;
            if(up <= down){
                for(int i = right; i >= left; i--){
                    arr.push_back(matrix[down][i]);
                }
            down--;
            }
            if(left <= right){
                for(int i = down; i >= up; i--){
                    arr.push_back(matrix[i][left]);
                }
            left++;
            }
        }
        return arr;
    }
};