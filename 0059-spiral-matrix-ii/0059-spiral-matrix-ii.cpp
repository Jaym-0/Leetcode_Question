class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n));
        int left = 0 ,up = 0;
        int right = n - 1;
        int down = n - 1;
        int k = 1;
        while(left <= right && up <= down){
            for(int i = left; i <= right; i++){
                arr[up][i] = k++;
            }
            up++;
            for(int i = up; i <= down; i++){
                arr[i][right] = k++;
            }
            right--;
            if(up <= down){
                for(int i = right; i >= left; i--){
                    arr[down][i] = k++;
                }
            down--;
            }
            if(left <= right){
                for(int i = down; i >= up; i--){
                    arr[i][left] = k++;
                }
            left++;
            }
        }
        return arr;
    }
};