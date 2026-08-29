class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        // error
        // counter 10 hote hi exit kr looo
        int score = 0, counter = 0;
        for(string i : events){
            if(counter < 10){
                if(i == "W"){
                    counter++;
                }else if(i == "WD"){
                    score++;
                }else if(i == "NB"){
                    score++;
                }else{
                    char c = i[0];
                    score += c - '0';
                }
            }else{
                break;
            }
        }
        
        return {score,counter};
    }
};