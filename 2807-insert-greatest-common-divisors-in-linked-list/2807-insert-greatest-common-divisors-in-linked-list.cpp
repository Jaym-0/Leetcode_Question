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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* prev = head;
        ListNode* nxt = head->next;
        while(nxt != NULL){
            int val = gcd(prev->val, nxt->val); 
            ListNode* temp = new ListNode(val);
            prev->next = temp;
            temp->next = nxt;
            prev = prev->next->next;
            nxt = nxt->next;
        }
        return head;
    }
};