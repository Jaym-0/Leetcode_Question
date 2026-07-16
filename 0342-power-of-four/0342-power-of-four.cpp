class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) {
            return false;
        }
        while(n % 4 == 0){
            n /= 4;
        }
        return n == 1;
    }
};
/*
class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i = 0; i <= 15; i++){
            if(n == pow(4,i)){
                return true;
            }
        }
        return false;
    }
};
*/
