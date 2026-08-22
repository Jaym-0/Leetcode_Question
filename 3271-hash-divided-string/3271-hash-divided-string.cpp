class Solution {
public:
    string stringHash(string s, int k) {
        string ans = "";
        for(int i = 0; i < s.size(); i += k){
            int pos = 0;
            for(int j = i; j < i + k; j++){
                pos += s[j] - 'a';
            }
            pos = pos % 26;
            ans += 'a' + pos;
        } 
        return ans;
    }
};