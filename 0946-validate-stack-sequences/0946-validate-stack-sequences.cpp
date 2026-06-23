class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0, j = 0, size = pushed.size();
        stack<int> s1;
        stack<int> s2;
        while(i != size && j != size){
            if(i < size){
                s1.push(pushed[i]);
                i++;
            }
            while(!s1.empty() && j < size && s1.top() == popped[j]){
                s1.pop();
                j++;
            }
        }
        if(s1.empty())
        {
            return true;
        }
        else {
            return false;
        }

    }
};