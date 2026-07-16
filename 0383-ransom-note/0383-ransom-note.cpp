class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        unordered_map<char,int> p;
        for(char c : ransomNote){
            m[c]++;
        }
        for(char c : magazine){
            p[c]++;
        }
        bool ans = false;
        for(char c : ransomNote){
            if(m[c] <= p[c]){
                ans = true;
            }
            else{
                ans = false;
                break;
            }
        }
        return ans;
    }
};