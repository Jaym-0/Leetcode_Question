class Solution {
public:
    string truncateSentence(string s, int k) {
        string newStr = "";
        int i = 0;
        while(i < s.size()){
            if(s[i] == ' '){
                k--;
                if(k == 0){
                    break;
                }
            }
            i++;
        }

        newStr.append(s,0,i);
        return newStr;
    }
};