/*
Question: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
Solution: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/submissions/888689405/
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BST(nums, 0, nums.size() - 1);
    }

    TreeNode* BST(vector<int> &nums, int left, int right){
        if(left > right)
            return NULL;
        int mid = left + (right - left) / 2;
        TreeNode *head = new TreeNode(nums[mid]);
        head->left = BST(nums, left, mid - 1);
        head->right = BST(nums,mid + 1, right);
        return head;
    }
};
