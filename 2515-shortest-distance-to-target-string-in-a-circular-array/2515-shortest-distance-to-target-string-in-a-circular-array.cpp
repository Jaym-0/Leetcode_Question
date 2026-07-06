class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int size = words.size();
        int ans = INT_MAX;
        for(int i = 0; i < size; i++){
            if(words[i] == target){
                // starting se------
                int start = abs(i - startIndex);
                // ending se
                int end = size - start;
                ans = min(ans,min(start,end));
            }
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};