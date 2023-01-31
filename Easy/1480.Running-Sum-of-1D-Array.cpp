/*
Question: https://leetcode.com/problems/running-sum-of-1d-array/
Solution: https://leetcode.com/problems/running-sum-of-1d-array/submissions/888707920/
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> arraySum(n, 0);
        arraySum[0] = nums[0];
        for(int i = 1; i < n; i++)
            arraySum[i] = arraySum[i - 1] + nums[i];
        return arraySum;
    }
};