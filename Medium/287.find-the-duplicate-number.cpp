/*
Question: https://leetcode.com/problems/find-the-duplicate-number/
Solution: https://leetcode.com/problems/find-the-duplicate-number/submissions/924320939/
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = nums[0], slow = nums[0];
        while(fast && nums[nums[fast]]){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(fast == slow)
                break;
        }
        fast = nums[0];
        while(fast != slow){
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};