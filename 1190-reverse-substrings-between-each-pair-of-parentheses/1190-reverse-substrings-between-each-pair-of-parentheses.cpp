class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string temp = "";
        for(char c : s){
            if(c == '('){
                st.push(temp);
                temp = "";
            }else if(c == ')'){
                reverse(temp.begin(),temp.end());
                string top = st.top();
                st.pop();
                temp = top + temp;
            }else{
                temp += c;
            }
        }
        return temp;
    }
};