class Solution {
public:
    bool detectCapitalUse(string word) {
        int size = word.length();
        int count = 0;
        for(int j = 1; j < size; j++){
            char i = word[j];
            if(i >= 'A' && i <= 'Z'){
                count++;
            }
        }
        bool first = false;
        if(word[0] >= 'A' && word[0] <= 'Z'){
            first = true;
        }
        if(first && (count == 0) || (first && count == size - 1)){
            return true;
        }else if(first == false && count == 0){
            return true;
        }else{
            return false;
        }
    }
};