/*
Question: https://leetcode.com/problems/base-7/
Solution: https://leetcode.com/problems/base-7/submissions/918504750/
*/

class Solution {
public:
    string convertToBase7(int num) {
        string res = "";
        if(num == 0)
            return "0";
        bool isNegative = num < 0 ? true : false;
        if(isNegative)
            num = num * -1;
        while(num > 0){
            res = to_string(num % 7) + res;
            num = num / 7;
        }
        if(isNegative)
            res = "-" + res;
        return res;
    }
};