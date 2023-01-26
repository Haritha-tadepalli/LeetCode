/*
Question: https://leetcode.com/problems/symmetric-tree/
Solution: https://leetcode.com/problems/symmetric-tree/submissions/845170236/
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

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return (!root) || symmetric(root->left, root->right);
    }
    
    bool symmetric(TreeNode* rLeft, TreeNode* rRight){
        if(rLeft == NULL || rRight == NULL)
            return rLeft == rRight;
        if(rLeft->val != rRight->val)
            return false;
        return symmetric(rLeft->right, rRight->left) && symmetric(rRight->right, rLeft->left);
    }
};