class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i : nums){
            maxi = max(maxi, i);
        }
        if(maxi == 1) return 1;
        if(maxi == 2) return 2;
        int ans = 1;
        while(ans <= maxi){
            ans <<= 1;
        }
        return ans;
    }
};