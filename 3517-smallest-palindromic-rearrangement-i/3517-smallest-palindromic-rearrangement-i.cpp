class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size() == 1){
            return s;
        } 
        string mid = "";
        string left = "";
        vector<int> freq(26,0);
        for(int i = 0; i < s.size(); i++){
            freq[s[i] - 'a']++;
        }
        for(auto i : freq){
            cout<< i << " ";
        }
        for(int i = 0; i < freq.size(); i++){
            left += string(freq[i] / 2, char(i + 'a'));

            if(freq[i] % 2 == 1){
                mid = char(i + 'a');
            }
        }
        string right = left;
        reverse(right.begin(), right.end());
        string ans = left + mid + right;
        return ans;
    }
};