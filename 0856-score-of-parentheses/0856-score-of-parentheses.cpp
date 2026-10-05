class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(int i : s){
            if(i == '('){
                st.push(0);
            }else{
                int inside = st.top();
                st.pop();
                if(inside == 0){
                    int temp = st.top();
                    st.pop();
                    st.push(temp + 1);
                }else{
                    int temp = st.top();
                    st.pop();
                    st.push(temp + 2 * inside);
                }
            }
        }
        return  st.top();
    }
};