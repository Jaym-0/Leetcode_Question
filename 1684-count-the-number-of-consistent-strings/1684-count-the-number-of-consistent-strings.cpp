class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        vector<bool> flag(26,false);
        for(auto i : allowed){
            flag[i - 'a'] = true;
        }
        for(auto s : words){
            bool check = true;
            for(char c : s){
                if(flag[c - 'a'] == false){
                    check = false;
                    break;
                }
            }
            if(check){
                count++;
            }
        }
        return count;
    }
};