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
    void inorder(TreeNode* root, vector<int>& arr){
        if(root == NULL) return ;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    TreeNode* solve(vector<int> arr){
        TreeNode* root = new TreeNode(arr[0]);
        TreeNode* curr = root;
        root->left = NULL;
        for(int i = 1; i < arr.size(); i++){
            TreeNode* temp = new TreeNode(arr[i]);
            curr->right = temp;
            curr = temp;
        }
        return root;
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> arr;
        inorder(root,arr);
        return solve(arr);
    }
};