/*
Question: https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/
Solution: https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/submissions/913777494/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
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

    TreeNode* BST(ListNode *left, ListNode *right){
        if(left == right)
            return nullptr;
        ListNode *fast = left, *slow = left;
        while(fast != right && fast->next != right){
            slow = slow->next;
            fast = fast->next->next;
        }
        TreeNode *root = new TreeNode(slow->val);
        root->left = BST(left, slow);
        root->right = BST(slow->next, right);
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        if(head == nullptr)
            return NULL;
        if(head->next == nullptr){
            TreeNode *root = new TreeNode(head->val);
            return root;
        }
        return BST(head, nullptr);
    }
};