class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        int size = code.size();
        if(k > 0){
            for(int i = 0; i < size; i++){
                int temp = 0;
                int j = k;
                while( j > 0){
                    temp += code[(i + j) % size];
                    j--;
                }
                ans.push_back(temp);
            }
        }
        else if(k == 0){
            ans = vector<int>(size,0);
            return ans;
        }
        else if(k < 0){
            for (int i = 0; i < size; i++) {
                int temp = 0;
                int j = 1;
                while (j <= abs(k)) {
                    temp += code[(i - j + size) % size];
                    j++;
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};