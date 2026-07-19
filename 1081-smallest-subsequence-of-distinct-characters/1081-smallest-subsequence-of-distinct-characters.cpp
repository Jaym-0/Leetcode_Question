class Solution {
public:
    string smallestSubsequence(string s) {
        int size = s.size();
        vector<int> map(26,0);
        for(int i = 0; i < size; i++){
            map[s[i] - 'a'] = i;
        }
        vector<bool> flag(26,false);
        stack<char> st;
        for(int i = 0; i < size; i++){
            char c = s[i];
            int idx = c - 'a';
            if(flag[idx]){
                continue;
            }
            while(!st.empty() && c < st.top() && map[st.top() - 'a'] > i){
                flag[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(c);
            flag[idx] = true;
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};