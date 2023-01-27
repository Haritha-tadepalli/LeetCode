/*
Question: https://leetcode.com/problems/missing-number/
Solution: https://leetcode.com/problems/missing-number/submissions/875211814/
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int arraySum = 0, orginalSum, n = nums.size();
        orginalSum = (n *(n + 1)) / 2;
        arraySum = accumulate(nums.begin(), nums.end(), 0);
        return orginalSum - arraySum;
    }
};