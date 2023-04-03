/*
Question: https://leetcode.com/problems/merge-sorted-array/
Solution: https://leetcode.com/problems/merge-sorted-array/submissions/924260428/
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        priority_queue<int> pq;
        for(int i = 0; i < m; i++)
            pq.push(nums1[i]);
        for(int j = 0; j < n; j++)
            pq.push(nums2[j]);
        for(int i = m + n - 1; i >= 0; i--){
            nums1[i] = pq.top();
            pq.pop();
        }
    }
};