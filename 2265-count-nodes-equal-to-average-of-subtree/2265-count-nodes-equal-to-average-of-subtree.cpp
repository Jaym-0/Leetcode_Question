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
public:
    pair<int,int> findAVG(TreeNode* root, int &ans){
        if(root == NULL){
            return {0,0};
        }
        auto left = findAVG(root->left,ans);
        auto right = findAVG(root->right,ans);
        int sum = left.first + right.first + root->val;
        int height = left.second + right.second + 1;
        if(sum / height == root->val){
            ans++;
        }
        return {sum,height};
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        findAVG(root,ans);
        return ans;
    }
};