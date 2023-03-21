/*
Question: https://leetcode.com/problems/number-of-zero-filled-subarrays/
Solution: https://leetcode.com/problems/number-of-zero-filled-subarrays/submissions/919237835/
*/

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int len = nums.size();
        long long count = 0, subArray = 0;
        for(int i  = 0; i < len; i++){
            if(nums[i] == 0)
                count++;
            else{
                subArray += (count * (count + 1) / 2);
                count = 0;
            }
        }
        if(count > 0)
            subArray += (count * (count + 1) / 2);
        return subArray;
    }
};