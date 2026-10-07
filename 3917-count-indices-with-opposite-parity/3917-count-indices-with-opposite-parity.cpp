class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;
        for(int i = 0; i < size - 1; i++){
            bool isOdd = true;
            if(nums[i] % 2 == 0){
                isOdd = false;
            }
            int count = 0;
            for(int j = i + 1; j < size; j++){
                if(isOdd){
                    if(nums[j] % 2 == 0){
                        count++;
                    }
                }
                if(!isOdd){
                    if(nums[j] % 2 != 0){
                        count++;
                    }
                }
            }
            ans.push_back(count);
        }
        ans.push_back(0);
        return ans;
    }
};