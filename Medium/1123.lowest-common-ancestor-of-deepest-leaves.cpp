/*
Question: https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/
Solution: https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/submissions/914305467/
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
    TreeNode *p, *q;

    void lowestLeaves(TreeNode *root){
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int count = que.size();
            p = que.front(); q = que.back();
            while(count--){
                TreeNode *temp = que.front();
                que.pop();
                if(temp->left)  que.push(temp->left);
                if(temp->right) que.push(temp->right);   
            }
        }
        return;
    }

    TreeNode *lca(TreeNode* root, TreeNode *p, TreeNode *q){
        if(root == NULL || root == p || root == q)
            return root;
        TreeNode *left = lca(root->left, p, q);
        TreeNode *right = lca(root->right, p, q);
        if(left == NULL)
            return right;
        else if(right == NULL)
            return left;
        else
            return root;
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        lowestLeaves(root);
        return lca(root, p, q);
    }
};