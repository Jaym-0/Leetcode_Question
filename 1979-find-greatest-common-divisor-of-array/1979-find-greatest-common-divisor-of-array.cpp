class Solution {
public:
    int GCD(int a, int b){
        if(b == 0){
            return a;
        }
        return GCD(b , a % b);
    }
    int findGCD(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int x : nums){
            mini = min(mini,x);
            maxi = max(maxi,x);
        }
        return GCD(mini,maxi);
    }
};