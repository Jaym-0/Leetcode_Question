class Solution {
public:
    int numberOfSubstrings(string s) {
        int size = s.length(), left = 0, ans = 0;
        vector<int> freq(3,0);
        for(int right = 0; right < size; right++){
            freq[s[right] - 'a']++;
            while(freq[0] && freq[1] && freq[2]){
                ans += size - right;
                freq[s[left] - 'a']--;
                left++;
            }
        }
        return ans;

        /* TLE
        // 53/54 Pass

        int count = 0;
        int size = s.length();
        for(int i = 0; i < size; i++){
            bool a = 0;
            bool b = 0;
            bool c = 0;
            for(int j = i; j < size; j++){
                
                if(s[j] == 'a'){
                    a = 1;
                }
                else if(s[j] == 'b'){
                    b = 1;
                }
                else if(s[j] == 'c'){
                    c = 1;
                }

                if(a && b && c){
                    // count++;
                    count += (size - j);
                    break;
                }
            }
            
        }
        return count;
        
        */
    }
};