class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int i : nums){
            if(i == digit){
                count++;
            }else if(i < digit){
                continue;
            }else{
                while(i > 0){
                    int rem =  i % 10;
                    if(rem == digit){
                        count++;
                    }
                    i = i / 10;
                }
            }
        }
        return count;
    }
};