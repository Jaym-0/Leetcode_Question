class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> A(26,0);
        vector<int> B(26,0);
        for(char c : s){
            A[c - 'a']++;
        }
        for(char c : t){
            B[c - 'a']++;
        }
        int count = 0;
        for(int i = 0; i < A.size(); i++){
            if(A[i] >= B[i]){
                count += abs(A[i] - B[i]);
            }
        }
        return count;
    }
};