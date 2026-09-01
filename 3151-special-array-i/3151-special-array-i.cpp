class Solution {
private:
    bool isEven(int n){
        if(n % 2 == 0){
            return true;
        }else{
            return false;
        }
    }
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            if(isEven(nums[i - 1]) && isEven(nums[i]) || !isEven(nums[i - 1]) && !isEven(nums[i])){
                return false;
            }
        }
        return true;
    }
};