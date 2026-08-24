class Solution {
public:
    string sortSentence(string s) {
        int space = 1;
        for(auto i : s){
            if(i == ' '){
                space++;
            }
        }
        vector<string> strs(space);
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                temp = "";
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                strs[(s[i] -'0' )- 1] = temp;
            }
            else{
                temp += s[i];
            }
        }
        string ans = "";
        for(int i = 0; i < strs.size(); i++){
            if(i == strs.size() - 1){
                ans += strs[i];
            }else{
                ans += strs[i] + ' ';
            }
        }
        return ans;
    }
};