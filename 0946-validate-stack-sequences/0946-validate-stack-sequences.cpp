class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0, j = 0, size = pushed.size();
        stack<int> s;
        while(i != size && j != size){
            if(i < size){
                s1.push(pushed[i]);
                i++;
            }
            while(!s.empty() && j < size && s.top() == popped[j]){
                s.pop();
                j++;
            }
        }
        if(s.empty())
        {
            return true;
        }
        else {
            return false;
        }

    }
};
