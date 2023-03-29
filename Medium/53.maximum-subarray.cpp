/*
Question: https://leetcode.com/problems/maximum-subarray/
Solution: https://leetcode.com/problems/maximum-subarray/submissions/924080067/
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN, len = nums.size();
        for(int i = 0; i < len; i++){
            currSum += nums[i];
            maxSum = max(currSum, maxSum);
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};