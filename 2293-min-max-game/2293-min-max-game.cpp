class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        vector<int> newarr(nums.begin(),nums.end());
        vector<int> temp;
        int size = nums.size();
      
        bool alter = false;
        while(newarr.size() > 1){
            temp.clear();
            for(int i = 1; i < newarr.size(); i+= 2){
                if(!alter){
                    temp.push_back(min(newarr[i -  1],newarr[i]));
                    alter = true;
                }else{
                    temp.push_back(max(newarr[i - 1], newarr[i]));
                    alter = false;
                }
            }
            newarr = temp;
        }
        return newarr[0];
    }
};