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
    void reorderList(ListNode* head) {
        // Find middle -  Reverse Secod Half 
        // merge one by one -----
    
    
        // Correct But Not Optimal Approach
        vector<int> arr;
        vector<int> nums;
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int s = 0, e = arr.size() - 1;
        while(s < e){
            nums.push_back(arr[s]);
            nums.push_back(arr[e]);
            s++;
            e--;
        }
        if (s == e) {
            nums.push_back(arr[s]);
        }
        int i = 0;
        temp = head;
        while(temp != NULL){
            temp->val = nums[i++];
            temp = temp->next;
        }
    }
};