class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<
        pair<int,vector<int>>, 
        vector<pair<int,vector<int>>>,
        greater<pair<int,vector<int>>> 
        > pq;
        vector<vector<int>> ans;
        for(auto i : points){
            int x = i[0];
            int y = i[1];
            int sqr = x * x + y * y;
            pq.push({sqr, i});
        }
        for(int i = 0;i < k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};