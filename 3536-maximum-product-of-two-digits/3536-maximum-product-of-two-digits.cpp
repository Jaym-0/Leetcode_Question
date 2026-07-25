class Solution {
public:
    int maxProduct(int n) {
        vector<int> temp;
        while(n > 0){
            int rem = n % 10;
            temp.push_back(rem);
            n /= 10;
        }
        sort(temp.begin(), temp.end());
        int last = temp.size() - 1;
        return (temp[last] * temp[last - 1]);
    }
};