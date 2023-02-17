/*
Question: https://leetcode.com/problems/minimum-distance-between-bst-nodes/
Solution: https://leetcode.com/problems/minimum-distance-between-bst-nodes/submissions/899468124/
**/

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
    vector<int> inorderTree;

    void inorder(TreeNode* root){
        if(!root)
            return;
        inorder(root->left);
        inorderTree.push_back(root->val);
        inorder(root->right);
        return;
    }

    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int minDiff = INT_MAX;
        for(int i = 1; i < inorderTree.size(); i++){
            minDiff = min(minDiff, inorderTree[i] - inorderTree[i - 1]);
        }
        return minDiff;
    }
};