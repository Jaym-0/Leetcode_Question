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
    void nodeToArr(TreeNode* root, vector<int> &arr){
        if(root == NULL){
            return ;
        }
        nodeToArr(root->left,arr);
        arr.push_back(root->val);
        nodeToArr(root->right,arr);
    }
public:
    bool isValidBST(TreeNode* root) {
        // inorder of BST is Sorted (Always)
        vector<int> arr;
        nodeToArr(root,arr);
        bool ans = true;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i - 1] >= arr[i]){
                ans = false;
                break;
            }
        }
        return ans;
    }
};