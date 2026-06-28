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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        unordered_map<int,int> mp;
        for(int &x : nums){
            mp[x]++;
        }
        ListNode* newList = new ListNode(0);
        newList->next = head;
        ListNode* temp = newList;
        while(temp->next){
            if(mp.count(temp->next->val)){
                temp->next = temp->next->next;
            }else{
                temp = temp->next;
            }
        }
        return newList->next;
          
        /*
        // -----------TLE---------- We Visit Many Time to a single Node, So time Complexity is so High

        int size = nums.size();
        ListNode ans(0);
        ans.next = head;
        for(int i = 0; i < size; i++){
            ListNode* temp = &ans;
            int x = nums[i];
            while(temp->next!=NULL){
                if(temp->next->val == x){
                    temp->next = temp->next->next;
                }else{
                    temp = temp->next;
                }
            }
        }
        return ans.next;
        */
    }
};