/*
Question: https://leetcode.com/problems/merge-k-sorted-lists/
Solution: https://leetcode.com/problems/merge-k-sorted-lists/submissions/913733635/
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
class cmp {
public:
    bool operator()(ListNode *node1, ListNode *node2){
        return (node1->val > node2->val);
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if((lists.size() == 1 && lists[0] == NULL) || lists.size() == 0)
            return NULL;
        if(lists.size() == 1)
            return lists[0];
        ListNode *mergedList = new ListNode();
        ListNode *head = mergedList;
        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
        for(int i = 0; i < lists.size(); i++)
            if(lists[i])
                pq.push(lists[i]);
        while(!pq.empty()){
            ListNode *temp = pq.top();
            pq.pop();
            head->next = new ListNode(temp->val);
            if(temp->next)  pq.push(temp->next);
            head = head->next;
        }
        return mergedList->next;
    }
};