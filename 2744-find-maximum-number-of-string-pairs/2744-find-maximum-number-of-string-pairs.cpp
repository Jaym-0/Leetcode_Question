class Solution {
    vector<string> reverseStr(vector<string> words){
        vector<string> rev;
        for(string s : words){
            // reverse(s.begin(), s.end()); // does't use since given -> words[i].length == 2 so we use { Swap } to reduce Time Complexity
            swap(s[0],s[1]);
            rev.push_back(s);
        }
        return rev;
    }
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        vector<string> revStr = reverseStr(words);
        int size = words.size();
        int count = 0;
        for(int i = 0; i < size - 1; i++){
            for(int j = i + 1; j < size; j++){
                if(words[i] == revStr[j]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};