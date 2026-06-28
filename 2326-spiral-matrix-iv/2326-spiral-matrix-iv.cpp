/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> arr(m,vector<int>(n,-1));
        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;

        ListNode* temp = head;
        
        while(temp && top <= bottom && left <= right){
            // left -> right
            for(int i = left; i <= right && temp; i++){
                arr[top][i] = temp->val;
                temp = temp->next;
            }
            top++;
            // top -> down
            for(int i = top; i <= bottom && temp; i++){
                arr[i][right] = temp->val;
                temp = temp->next;
            }
            right--;
            // right-> left
            for(int i = right; i >= left && temp; i--){
                arr[bottom][i] = temp->val;
                temp = temp->next;
            }
            bottom--;
            //  Down->Up
            for(int i = bottom; i >= top && temp; i--){
                arr[i][left] = temp->val;
                temp = temp->next;
            }
            left++;
        }
        return arr;
    }
};