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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;
        for(auto head : lists){
            while(head){
                values.push_back(head->val);
                head = head->next;
            }
        }

        sort(values.begin(),values.end());

        ListNode* root = new ListNode(0); // we can store first element because for empty lists it got error
        ListNode* curr = root;
        for(int i = 0; i < values.size(); i++){
            ListNode* temp = new ListNode(values[i]);
            curr -> next = temp;
            curr = temp;
        } 
        return root->next;
    }
};