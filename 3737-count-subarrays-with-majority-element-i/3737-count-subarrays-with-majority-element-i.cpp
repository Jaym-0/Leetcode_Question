class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int size = nums.size(), count = 0;
        for(int i = 0; i < size; i++){
            int cnt = 0;
            for(int j = i; j < size; j++){
                cnt += (nums[j] == target) ? +1 : -1;
                if(cnt > 0) count++;
            }
        }
    return count;

        
        /*

        int size = nums.size(), count = 0;
        for(int i = 0; i < size; i++){
            int cnt = 0;
            for(int j = i; j < size; j++){
                if(nums[j] == target){
                    cnt++;
                }
                if(cnt > (j - i + 1) / 2){
                    //  j - i + 1 is lenght of subarray
                    count++;
                }
            }
        }
        return count;

        */
    }
};