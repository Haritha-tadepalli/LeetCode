/*
Question: https://leetcode.com/problems/excel-sheet-column-number/
Solution: https://leetcode.com/problems/excel-sheet-column-number/submissions/885618004/
*/


class Solution {
public:
    int titleToNumber(string title) {
        int num = 0;
        for(int i = 0; i < title.size(); i++){
            num = num * 26 + (title[i] - 'A' + 1);
        }
        return num;
    }
};