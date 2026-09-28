class Solution {
public:
    int maxDepth(string s) {
        int length = s.length();
        int count = 0;
        int ans = 0;
        for(int i = length - 1; i >= 0; i--){
            if(s[i] == '('){
                ans = max(count,ans);
                if(count > 0){
                    count--;
                }
                continue;
            }else if(s[i] == ')'){
                count++;
            }
        }
        return ans;
    }
};