class Solution {
private:
    void digit(int n, int &sum, int &mul){
        while(n > 0){
            int rem = n % 10;
            sum += rem;
            mul *= rem;
            n /= 10;
        }
    }
public:
    bool checkDivisibility(int n) {
        int sum = 0, mul = 1;
        digit(n, sum, mul);
        int total = sum + mul;
        if(n % total == 0){
            return true;
        }else{
            return false;
        }
    }
};