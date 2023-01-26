/*
Question: https://leetcode.com/problems/merge-sorted-array/
Solution: https://leetcode.com/problems/merge-sorted-array/submissions/845160830/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0)
            return;
        if(m == 0){
            nums1 = nums2;
            return;
        }
        for(int i = 0; i < n; i++)
            nums1[i + m] = nums2[i];
        sort(nums1.begin(), nums1.end());
        
    }
};