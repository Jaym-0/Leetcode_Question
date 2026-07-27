class Solution {
public:
    int maxProduct(vector<int>& nums) {
        /*
        // Heap
        priority_queue<int> pq;
        for(int i = 0; i < nums.size(); i++){
            pq.push(nums[i]);
        }
        int maxAns = pq.top() - 1;
        pq.pop();
        maxAns *= pq.top() - 1;
        return maxAns;
        */

        // Sort
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return (nums[n-1]-1) * (nums[n-2]-1);
    }
};