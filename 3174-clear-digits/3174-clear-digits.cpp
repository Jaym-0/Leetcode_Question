class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(char i : s){
            if(st.empty()){
                st.push(i);
            }
            else if(i >= '0' &&  i <= '9' && !st.empty()){
                st.pop();
            }else{
                st.push(i);
            }
        }
        string ans = "";
        stack<char> st2;
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        while(!st2.empty()){
            ans += st2.top();
            st2.pop();
        }
        return ans;

    }
};