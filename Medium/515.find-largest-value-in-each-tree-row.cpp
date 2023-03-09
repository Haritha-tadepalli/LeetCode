/*
Question: https://leetcode.com/problems/find-largest-value-in-each-tree-row/
Solution: https://leetcode.com/problems/find-largest-value-in-each-tree-row/submissions/908265607/
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
    vector<int> largestValues(TreeNode* root) {
        if(!root)
            return {};
        vector<int> large;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int rowMax = INT_MIN;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(!temp){
                large.push_back(rowMax);
                rowMax = INT_MIN;
                if(!q.empty())
                    q.push(NULL);
            }
            else{
                rowMax = max(rowMax, temp->val);
                if(temp->left)  q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return large;
    }
};