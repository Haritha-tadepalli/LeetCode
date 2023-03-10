/*
Question: https://leetcode.com/problems/linked-list-random-node/
Solution: https://leetcode.com/problems/linked-list-random-node/submissions/912437384/
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
 #include<bits/stdc++.h>
class Solution {
public:
    int len;
    ListNode *head;
    Solution(ListNode* head) {
        this->head = head;
        srand(time(0));
    }
    
    int getRandom() {
        int count = 0, res;
        ListNode *curr = head;
        while(curr){
            count++;
            if(rand() % count == 0)
                res = curr->val;
            curr = curr->next;
        }
        return res;

    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */