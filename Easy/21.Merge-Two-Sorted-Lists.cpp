/**
 //Question Link: https://leetcode.com/problems/merge-two-sorted-lists/
 //Solution: https://leetcode.com/submissions/detail/845006341/git 

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        while(list1 && list2){
            if(list1->val < list2->val)
                list1 = list1->next;
            else{
                ListNode *temp = list1->next;
                list1
            }
        }
    }
};