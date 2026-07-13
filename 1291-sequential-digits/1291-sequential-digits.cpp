class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        queue<int> q;
        for(int i = 1; i <= 9; i++){
            q.push(i);
            while(!q.empty()){
                int front = q.front();
                q.pop();
                if(front >= low && front <= high){
                    ans.push_back(front);
                }
                int rem = front % 10;
                if(rem < 9){
                    front = front * 10 + ( rem + 1 );
                    q.push(front);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};