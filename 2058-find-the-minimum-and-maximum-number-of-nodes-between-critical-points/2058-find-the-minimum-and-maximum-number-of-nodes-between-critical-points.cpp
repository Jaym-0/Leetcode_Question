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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        vector<int> diff;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        if(size < 3){
            return {-1,-1};
        }else{
            int count = 1;
            ListNode* curr = head->next;
            ListNode* prev = head;
            ListNode* nxt = head->next->next;
            while(prev->next->next != NULL && nxt != NULL && curr->next != NULL){
                int pval = prev->val;
                int nval = nxt->val;
                int cval = curr->val;
                count++;
                if(pval > cval && cval < nval){
                    diff.push_back(count);
                }
                if(pval < cval && cval > nval){
                    diff.push_back(count);
                }
                prev = prev->next;
                nxt = nxt->next;
                curr = curr->next;
            }   
        }
        // for(int i : diff){
        //     cout << i << " ";
        // }
        if(diff.size() < 2){
            return {-1, -1};
        }
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 1; i < diff.size(); i++){
            mini = min(mini ,diff[i] - diff[i-1]);
            maxi = max(maxi, diff[i] - diff[0]);
        }
        return {mini,maxi};
    }
};