/*
Question: https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/
Solution: https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/submissions/914373211/
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
    int res = 0;

    void helper(TreeNode *root, int minVal, int maxVal){
        if(!root)
            return;
        int x = max(abs(root->val - minVal), abs(root->val - maxVal));
        res = max(res, x);
        maxVal = max(maxVal, root->val);
        minVal = min(minVal, root->val);
        helper(root->left, minVal, maxVal);
        helper(root->right, minVal, maxVal);
    }

    int maxAncestorDiff(TreeNode* root) {
        if(!root)
            return 0;
        helper(root, root->val, root->val);
        return res;
    }
};