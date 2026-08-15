class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int temp = 0;
        bool zero = false;
        for(int i : nums){
            temp ^= i;
            if(i != 0){
                zero = true;
            }
        }
        if(temp != 0){
            return nums.size();
            zero = true;
        }
        if(zero){
            return nums.size() - 1;
        }
        return 0;

    }
};