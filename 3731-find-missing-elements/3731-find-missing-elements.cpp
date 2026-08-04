class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> missing;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int small = nums[0];
        int large = nums[size - 1];
        
        
        int i = 0;
        while(small < large && i < nums.size()){
            if(small != nums[i]){
                missing.push_back(small);
                small += 1;
                continue;
            }
            else{
                i += 1;
                small += 1;
            }
        }
        return missing;
        
    }
};