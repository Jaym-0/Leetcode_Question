class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i = 1;
        while(true){
            int temp = k * i;
            bool check = false;
            for(int i : nums){
                if(temp == i){
                    check = true;
                }
            }
            if(check){
                i++;
            }else{
                return temp;
            }
        }
    }
};