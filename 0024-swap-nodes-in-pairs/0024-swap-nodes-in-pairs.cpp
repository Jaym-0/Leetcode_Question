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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = new ListNode(0);
        curr->next = head;
        ListNode* temp = curr;
        
        while(temp->next != NULL && temp->next->next != NULL){
            ListNode* slow =  temp->next;    
            ListNode* fast = slow->next;
            // Swapp Babyyyyyyyyyyyy
            slow->next = fast->next;
            fast->next = temp->next;
            temp->next = fast;
            temp = slow;
        }
        return curr->next;
    }
};

/*
// Space O(n) but correct
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        for(int i = 1; i < arr.size(); i += 2){
            swap(arr[i],arr[i-1]);
        }
        temp = head;
        int i = 0;
        while(temp != NULL){
            temp->val = arr[i++];
            temp = temp->next;
        }
        return head;
    }
};
*/