/*
Question: https://leetcode.com/problems/linked-list-cycle-ii/
Solution: https://leetcode.com/problems/linked-list-cycle-ii/submissions/911877622/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast, *slow;
        fast = head; slow = head;
        if(!head || !head->next)
            return NULL;
        while(slow->next && fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                break;
        }
        if(fast != slow)
            return NULL;
        fast = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
};