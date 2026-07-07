class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num = 0;
        long long sum = 0;
        string temp = to_string(n);
        for(auto x : temp){
            if(x != '0'){
                num = num * 10 + (x - '0');
                sum += (x - '0');
            }
        }
        return  num * sum;
    }
};