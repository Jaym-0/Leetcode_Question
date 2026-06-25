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
    ListNode* oddEvenList(ListNode* head) {
        // Trying to solve in O(n)

       if(head == NULL || head->next == NULL)
            return head;

        vector<int> value;
        ListNode* temp = head;
        while(temp != NULL){
            int a = temp->val;
            value.push_back(a);
            if(temp->next)
                temp = temp->next->next;
            else
                temp = NULL;
        }
        temp = head->next;
        while(temp != NULL){
            int a = temp->val;
            value.push_back(a);
            if(temp->next)
                temp = temp->next->next;
            else
                temp = NULL;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        ans->next = NULL;
        for(int i = 0; i < value.size(); i++){
            ans->next = new ListNode(value[i]);
            ans = ans->next;
        }

    return dummy->next;
    }
};