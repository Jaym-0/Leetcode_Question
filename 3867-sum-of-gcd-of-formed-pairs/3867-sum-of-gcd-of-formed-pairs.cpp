class Solution {
public:
    long long gcd(int a, int b){
        if(a == 0){
            return b;
        }
        if(b== 0){
            return a;
        }
        if(a > b){
            return gcd(a % b, b);
        }else{
            return gcd(b % a, a);
        }
    }

    long long gcdSum(vector<int>& nums) {
        long long ans = 0;
        long long maxi = INT_MIN;
        vector<long long> prefixGcd;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
            prefixGcd.push_back( gcd(nums[i], maxi) );
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int s = 0 ,e = prefixGcd.size() - 1;
        while(s < e){
            ans = ans + gcd(prefixGcd[s],prefixGcd[e]);
            s++;
            e--;
        }
        return ans;
    }
};