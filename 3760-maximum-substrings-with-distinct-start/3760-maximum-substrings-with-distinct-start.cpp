class Solution {
public:
    int maxDistinct(string s) {
        set<char> temp;
        for(char c : s){
            temp.insert(c);
        }
        return temp.size();
    }
};