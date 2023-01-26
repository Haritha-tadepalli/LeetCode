/*
Question: https://leetcode.com/problems/sqrtx/
Solution: https://leetcode.com/problems/sqrtx/submissions/885628771/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1)
            return x;
        int l = 1, r = x / 2, ans;
        while(l <= r){
            long long mid = l + (r - l) / 2;
            if(mid * mid == x)
                return mid;
            else if(mid * mid > x)
                r = mid - 1;
            else{
                l = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};