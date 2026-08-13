class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int size = groupSizes.size();
        vector<vector<int>> ans;
        vector<bool> flag(size, false);

        for (int i = 0; i < size; i++) {
            vector<int> temp;
            if (flag[i] == false) {
                temp.push_back(i);
                flag[i] = true;
                for (int j = i + 1; j < size; j++) {
                    if (groupSizes[i] == groupSizes[j] && flag[j] == false && temp.size() < groupSizes[i]) {
                        temp.push_back(j);
                        flag[j] = true;
                    }
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};