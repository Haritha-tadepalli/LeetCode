//Question: https://leetcode.com/problems/roman-to-integer/
//Solution: https://leetcode.com/submissions/detail/884959607/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> symbols;
        symbols['I'] = 1;   symbols['V'] = 5;
        symbols['X'] = 10;  symbols['L'] = 50;
        symbols['C'] = 100; symbols['D'] = 500;
        symbols['M'] = 1000;
        int ans = 0, len = s.size(), i = 0;
        for(i = 0; i < len - 1; i++){
            if(symbols[s[i]] < symbols[s[i + 1]])
                ans -= symbols[s[i]];
            else
                ans += symbols[s[i]];
        }
        ans += symbols[s[i]];
        return ans;
    }
};