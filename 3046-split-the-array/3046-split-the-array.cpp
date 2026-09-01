class Solution {
private:
    bool isDistinct(vector<int> arr){
        for(int i = 1; i < arr.size(); i++){
            if(arr[i - 1] == arr[i]){
                return false;
            }
        }
        return true;
    }
public:
    bool isPossibleToSplit(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> a1;
        vector<int> a2;
        for(int i = 0; i < nums.size(); i+= 2){
            a1.push_back(nums[i]);
            a2.push_back(nums[i + 1]);
        }
        if(isDistinct(a1) && isDistinct(a2)){
            return true;
        }else{
            return false;
        }
    }
};