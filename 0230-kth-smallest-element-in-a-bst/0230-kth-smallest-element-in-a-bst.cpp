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
    void nodeToVec(TreeNode* root, vector<int> &arr){
        if(root == NULL){
            return ;
        }
        nodeToVec(root->left,arr);
        arr.push_back(root->val);
        nodeToVec(root->right,arr);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int>arr;
        nodeToVec(root, arr);
        return arr[k - 1];  // i think ya if(arr[k-1]) to  return kro wrna -1 return kro
    }
};



/*
class Solution {
private:
    int solve(TreeNode* root, int &i , int k){
        if(root == NULL) return -1;

        int left = solve(root->left, i ,k);
        if(left != -1){
            return left;
        }
        i++;
        if(i == k){
            return root->val;
        }
        return solve(root->right,i ,k);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        int i = 0;
        return solve(root, i, k);
    }
};
*/