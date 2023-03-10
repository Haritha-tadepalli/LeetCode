/*
Question: https://leetcode.com/problems/number-of-1-bits/
Solution: https://leetcode.com/problems/number-of-1-bits/submissions/875299808/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            n = n & (n - 1);
            count++;
        }
        return count;
    }
};