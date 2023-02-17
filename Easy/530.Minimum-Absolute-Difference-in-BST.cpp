/*
Question: https://leetcode.com/problems/minimum-absolute-difference-in-bst/
Solution: https://leetcode.com/problems/minimum-absolute-difference-in-bst/submissions/899478553/
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
    int minDiff = INT_MAX;
    TreeNode *preVal = NULL;

    void inorder(TreeNode* root){
        if(!root)
            return;
        inorder(root->left);
        if(preVal){
            minDiff = min(minDiff, root->val - preVal->val);
        }
        preVal = root;
        inorder(root->right);
        return;
    }

    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return minDiff;
    }
};