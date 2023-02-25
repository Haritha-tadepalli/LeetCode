/*
Question: https://leetcode.com/problems/squares-of-a-sorted-array/
Solution: https://leetcode.com/problems/squares-of-a-sorted-array/submissions/680724832/
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(), l = 0 , r = n-1;
        vector<int> squr(n);

        for (int k = nums.size() - 1; k >= 0; k--) {
            if (abs(nums[r]) > abs(nums[l])) squr[k] = nums[r] * nums[r--];
            else squr[k] = nums[l] * nums[l++];
        } 
        return squr;
    }
    
};