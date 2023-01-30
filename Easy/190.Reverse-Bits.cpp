/*
Question: https://leetcode.com/problems/reverse-bits/
Solution: https://leetcode.com/problems/reverse-bits/submissions/887998791/
**/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t num = 0;
        for(int i = 0; i < 32; i++){
            num = num  * 2 + (n & 1);
            n = n >> 1;
        }
        return num;
    }
};
