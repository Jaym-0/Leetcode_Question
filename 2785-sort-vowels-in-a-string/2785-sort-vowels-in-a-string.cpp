class Solution {
public:
    string sortVowels(string s) {
        vector<char> vol;
        for(char ch : s){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vol.push_back(ch);
            } 
        }
        sort(vol.begin(),vol.end());
        int j = 0;
        for(char &ch : s){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                ch = vol[j++];
            } 
        }
        return s;
    }
};