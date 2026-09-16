class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        unordered_map<int,vector<char>> mp;
        mp[1] = {'q','w','e','r','t','y','u','i','o','p'};
        mp[2] = {'a','s','d','f','g','h','j','k','l'};
        mp[3] = {'z','x','c','v','b','n','m'};
        for(auto str : words){
            bool pos = true;
            int row = -1;
            for(auto ch : str){
                ch = tolower(ch);
                for(auto i : mp){
                    if(find(i.second.begin(),i.second.end(), ch) != i.second.end()){
                        if(row == -1){
                            row = i.first;
                        }
                        else if(row != i.first){
                            pos = false;
                        }
                    }
                }
            }
            if(pos){
                ans.push_back(str);
            }
        }
        return ans;
    }
};