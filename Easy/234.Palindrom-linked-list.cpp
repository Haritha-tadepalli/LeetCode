/*
Question: https://leetcode.com/problems/palindrome-linked-list/
Solution: https://leetcode.com/problems/palindrome-linked-list/submissions/875287259/
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
class Solution {
public:
    ListNode* reverseList(ListNode *head){
        ListNode *prev = NULL, *next = NULL, *curr = head;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    ListNode* midNode(ListNode * head){
        ListNode *fast = head, *slow = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        if(!head)
            return false;
        if(head && !head->next)
            return true;
        ListNode *temp = head, *mid = midNode(head);
        mid = mid->next;
        ListNode *reversedNode = reverseList(mid);
        while(temp != mid && reversedNode){
            if(temp->val != reversedNode->val)
                return false;
            temp = temp->next;
            reversedNode = reversedNode->next;
        }
        return true;
    }
};
