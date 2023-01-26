/*
Question: https://leetcode.com/problems/plus-one/
Solution: https://leetcode.com/problems/plus-one/submissions/845129390/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while(digits[i] + 1 > 9 && i > 0){
            digits[i] = 0;
            i--;
        }
        if(i <= 0 && digits[0] == 9){
            digits.push_back(0);
            digits[0] = 1;
        }   
        else
            digits[i] += 1;
        return digits;
    }
};