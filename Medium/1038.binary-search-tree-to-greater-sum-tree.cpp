/*
Question: https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
Solution: https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/submissions/918507693/
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
    vector<TreeNode *> inorderList;
    
    void inorder(TreeNode *root){
        if(!root)
            return;
        inorder(root->left);
        inorderList.push_back(root);
        inorder(root->right);
        return;
    }
    TreeNode* bstToGst(TreeNode* root) {
        inorder(root);
        int len = inorderList.size();
        for(int i = len - 2; i >= 0; i--){
            inorderList[i]->val += inorderList[i + 1]->val;
        }
        return root;
    }
};