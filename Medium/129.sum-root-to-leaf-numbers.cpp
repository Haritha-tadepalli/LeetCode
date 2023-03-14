/*
Question: https://leetcode.com/problems/sum-root-to-leaf-numbers/
SOlution: https://leetcode.com/problems/sum-root-to-leaf-numbers/submissions/914750017/
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
    int nodeSum = 0;

    void findNum(TreeNode* root, int currSum){
        if(!root)
            return;
        currSum = currSum * 10 + root->val;
        if(!root->left && !root->right){
            nodeSum += currSum;
            return;
        }
        if(root->left)  findNum(root->left, currSum);
        if(root->right) findNum(root->right, currSum);
        return;
    }

    int sumNumbers(TreeNode* root) {
        findNum(root, 0);
        return nodeSum;
    }
};