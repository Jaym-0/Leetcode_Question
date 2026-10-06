class Solution {
public:
    int minPartitions(string n) {
        int ans = INT_MIN;
        for(char i : n){
            int x = i - '0';
            ans = max(ans, x);
        }
        return ans;
    }
};