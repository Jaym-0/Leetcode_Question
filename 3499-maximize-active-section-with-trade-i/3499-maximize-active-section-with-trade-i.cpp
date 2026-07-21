class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int> zeros;
        int maxOne = 0;
        int maxZero = 0;
        for(int i : s){
            if(i == '1'){
                maxOne++;
            }
        }
        s = "1" + s + "1";
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                cnt++;
            }
            else if(s[i] == '1'){
                if(cnt == 0){
                    continue;
                }
                else{
                    zeros.push_back(cnt);
                    cnt = 0;
                }
            }
        }
        for(int i  = 1; i < zeros.size(); i++){
            int temp = zeros[i - 1] + zeros[i];
            maxZero = max(maxZero,temp);
        }
    return maxOne + maxZero;
    }
};