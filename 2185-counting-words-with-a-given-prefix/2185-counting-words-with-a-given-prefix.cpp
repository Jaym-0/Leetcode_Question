class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(int i = 0; i < words.size(); i++){
            string temp = words[i];
            string may = "";
            if (temp.size() < pref.size()){
                continue;
            }
            for(int j = 0; j < pref.size(); j++){
                may += temp[j];
            }
            if(pref == may){
                count++;
            }
        }
        return count;
    }
};