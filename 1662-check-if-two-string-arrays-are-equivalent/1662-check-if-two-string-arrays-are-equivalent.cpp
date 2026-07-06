class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string first = "";
        string second = "";
        for(string str : word1){
            first += str;
        }
        
        for(string str : word2){
            second += str;
        }
        if(first == second) return true;
        else return false;
    }
};