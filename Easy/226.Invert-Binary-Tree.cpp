/*
Question: https://leetcode.com/problems/invert-binary-tree/
Solution: https://leetcode.com/problems/invert-binary-tree/submissions/900708915/
*/

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
    void preorder(TreeNode *root){
        if(!root)
            return;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        if(root->left)  preorder(root->left);
        if(root->right) preorder(root->right);
        return;
    }

    TreeNode* invertTree(TreeNode* root) {
        preorder(root);
        return root;
    }
};