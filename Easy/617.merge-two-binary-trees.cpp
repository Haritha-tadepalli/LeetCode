/*
Question: https://leetcode.com/problems/merge-two-binary-trees/
Solution: https://leetcode.com/problems/merge-two-binary-trees/submissions/914992809/
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

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1)
            return root2;
        if(!root2)
            return root1;
        TreeNode *mergedRoot = new TreeNode(root1->val + root2->val);
        mergedRoot->left = mergeTrees(root1->left, root2->left);
        mergedRoot->right = mergeTrees(root1->right, root2->right);
        return mergedRoot;
    }
};