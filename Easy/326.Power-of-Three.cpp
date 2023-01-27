/*
Question: https://leetcode.com/problems/power-of-three/
Solution: https://leetcode.com/problems/power-of-three/submissions/875195508/
*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n < 1)
            return false;
        if(n == 1)
            return true;
        return (n % 3 == 0) && isPowerOfThree(n / 3);
    }
};