class Solution {
public:
    int minOperations(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        for(int i = 0; i <= size - 3; i++){
            if(nums[i] == 0){
                nums[i] ^= 1;
                nums[i + 1] ^= 1;
                nums[i + 2] ^= 1;
                count++;
            }
        }
        for(int i : nums){
            if(i == 0){
                return -1;
            }
        }
        return count;

    }
};