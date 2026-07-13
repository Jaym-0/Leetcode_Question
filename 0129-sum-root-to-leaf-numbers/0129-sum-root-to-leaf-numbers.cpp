/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void solve(TreeNode* root , int curr, int &ans){
        if(root == NULL ){
            return ;
        }
        curr = curr * 10 + root->val;
        if(root->left == NULL && root->right == NULL){
            ans += curr;
        }
        solve(root->left,curr,ans);
        solve(root->right,curr,ans);
    }
public:
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        solve(root,0,ans);
        return ans;
    }
};