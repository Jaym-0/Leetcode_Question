class Solution {
private:
    int getProd(int x){
        int mul = 1;
        while(x > 0){
            int rem = x % 10;
            mul *= rem;
            x /= 10;
        }
        return mul;
    }
public:
    int smallestNumber(int n, int t) {
        while(true){
            if(getProd(n) % t == 0){
                return n;
            }
            n++;
        }
    }
};