/*
Question: https://leetcode.com/problems/climbing-stairs/
Solution: https://leetcode.com/problems/climbing-stairs/submissions/845142625/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arr[46] = {0};
    int climbStairs(int n) {
        if(n <= 2)
            return n;
        if(arr[n] != 0)
            return arr[n];
        arr[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return arr[n];
    }
};