class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int size = strs.size()-1;
        string a = strs[0];
        for (int i = 0; i < a.size(); i++)
        {
            int count = 0;
            char v = a[i];
            for (int j = 1; j < strs.size();j++)
            {   
                if (i >= strs[j].size())
                    return ans;

                if (v == strs[j][i])
                    count++;
            }
            
            if(count == size)
            {
                ans.push_back(v);
            }
            else{
                break;
            }
        }
        return ans;
    }
};