class Solution {
public:
    int reverse(int x){
        int ans = 0;
        while(x > 0){
            int rem = x % 10;
            x = x / 10;
            ans = ans * 10 + rem;
        }
        return ans;
    }
    bool isPrime(int x){
        if(x < 2) return false;
        for(int i = 2; i * i<= x; i++){
            if(x % i == 0){
                return false;
            }
        }
        return true;

    }
    int sumOfPrimesInRange(int n) {
        int ans = 0;
        int revs=  reverse(n);
        for(int i = min(n,revs); i <= max(n,revs); i++){
            if(isPrime(i)){
                ans += i;
            }
        }
        return ans;
    }
};