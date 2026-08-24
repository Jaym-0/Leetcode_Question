class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int employees = 0;
        for(int i : hours){
            if(i >= target){
                employees++;
            }
        }
        return employees; 
    }
};