class Solution {
public:
    vector<int> minOperations(string boxes) {
        int size = boxes.size();
        vector<int> ans(size, 0);
        int balls = 0;
        int operation = 0;
        for(int i = 0; i < size; i++){
            ans[i] += operation;
            if(boxes[i] == '1'){
                balls += 1;
            }else{
                balls += 0;
            }
            operation += balls;
        }
        balls = 0;
        operation = 0;
        for(int i = size - 1; i >= 0; i--){
            ans[i] += operation;
            if(boxes[i] == '1'){
                balls += 1;
            }else{
                balls += 0;
            }
            operation += balls;
        }
        return ans;
    }
};