class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
       long long maxi = LLONG_MIN;
       for(int i = 0 ; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                long long temp =  gcd(nums[i],nums[j]);
                long long may = (1LL * nums[i] * nums[j]) / pow(temp,2);
                maxi = max(maxi, may);
            }
        } 
       return maxi;
    }
};