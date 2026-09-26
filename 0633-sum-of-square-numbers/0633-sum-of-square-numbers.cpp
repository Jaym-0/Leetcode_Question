class Solution {
public:
    bool judgeSquareSum(int c) {
        int root = sqrt(c);
        vector<int> arr;
        for(int i = 0; i <= root; i++){
            arr.push_back(i);
        }
        int i = 0, j = arr.size() - 1;
        while(i <= j){
            long long temp = 1LL * (arr[i] * arr[i]) + (arr[j] * arr[j]);
            if( temp == c){
                return true;
            }
            if(temp > c){
                j--;
            }
            if(temp < c){
                i++;
            }
        }
        return false;
    }
};