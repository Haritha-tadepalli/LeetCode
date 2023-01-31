/*
Question: https://leetcode.com/problems/number-of-good-pairs/
Solution: https://leetcode.com/problems/number-of-good-pairs/submissions/888716639/
*/


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> numCount;
        int goodPairs = 0;
        for(auto x : nums)
            numCount[x]++;
        for(auto x : numCount){
            if(x.second != 1)
                goodPairs += x.second * (x.second - 1) / 2;
        }
        return goodPairs;
    }
};