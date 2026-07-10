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
    TreeNode* preorderBST(vector<int> preorder, int &index, int maxi){
        if(index >= preorder.size() || preorder[index] > maxi) return NULL;
        TreeNode*  root = new TreeNode(preorder[index++]);
        root->left = preorderBST(preorder,index,root->val);
        root->right = preorderBST(preorder,index,maxi);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        int maxi = INT_MAX;
        return preorderBST(preorder,index,maxi);
    }
};