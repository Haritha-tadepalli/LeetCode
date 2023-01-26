/*
Question: https://leetcode.com/problems/intersection-of-two-linked-lists/
Solution: https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/885590803/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *listA = headA, *listB = headB;
        while(listA != listB){
            listA = listA == NULL ? headB : listA->next;
            listB = listB == NULL ? headA : listB->next;
        }
        return listA;
    }
};