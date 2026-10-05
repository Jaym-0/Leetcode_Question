class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = INT_MIN;
        int size = nums.size();
        for(int i = 0; i < size - 1; i++){
            for(int j = i + 1; j < size; j++){
                int temp = nums[j] - nums[i];
                if(temp > 0){
                    ans = max(ans, temp);
                }
            }
        }
        if(ans < 0){
            return -1;
        }else{
            return ans;
        }
    }
};