/*
Question: https://leetcode.com/problems/longest-consecutive-sequence/
Solution: https://leetcode.com/problems/longest-consecutive-sequence/submissions/925936014/
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        set<int> sorted_nums(nums.begin(), nums.end());
        int curr = *sorted_nums.begin(), currCount = 1, maxCount = 0;
        for(auto i = sorted_nums.begin(); i != sorted_nums.end(); i++){
            if(i == sorted_nums.begin())
                continue;
            if(curr + 1 != *i){
                maxCount = max(maxCount, currCount);
                currCount = 0;
            }
            curr = *i;
            currCount++;
        }
        return max(maxCount, currCount);
    }
};