class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(string str : words){
            string temp = "";
            for(char c : str){
                if(c == separator && temp.empty()){
                    continue;
                }else if(c == separator || c == '%' && !(temp.empty())){
                    ans.push_back(temp);
                    temp = "";
                }else{
                    temp += c;
                }
            }
            if(!temp.empty()){
                ans.push_back(temp);
                temp = "";
            }
        }
        return ans;
    }
};