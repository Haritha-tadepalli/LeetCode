//Question Link: https://leetcode.com/problems/delete-node-in-a-linked-list/

/*Intusion: while transversing the List, current node value can be overwritten with the next node value.
at the end of the list, last two node will have the same value so the last node can be disconnected there by decreasing the length of the List
*/

#include <bits/stdc++.h>
using namespace std;

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
    void deleteNode(ListNode* node) {
        ListNode* curr = node;
        
    //as the next node value is use, it is to be checked if the next node exists or not 
        while(node->next){ 
            node->val = node->next->val;
            //curr is used to save the last but one node.
            curr = node;
            node = node->next;
        }
        //Last node is disconnected.
        curr->next = NULL;
    }
};