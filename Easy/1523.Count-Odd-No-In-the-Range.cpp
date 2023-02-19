/*
Question: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
Solution: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/submissions/900847528/
*/

class Solution {
public:
    int countOdds(int l, int h) {
        return ((h + 1) / 2) - (l / 2);
    }
};