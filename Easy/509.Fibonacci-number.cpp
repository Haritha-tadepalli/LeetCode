/*
Question: https://leetcode.com/problems/fibonacci-number/
Solution: https://leetcode.com/problems/fibonacci-number/submissions/898947290/
**/

class Solution {
public:
    int fib(int n) {
        if(n <= 1)
            return n;
        vector<int> fibonacci(n + 1, 0);
        fibonacci[1] = 1;
        for(int i = 2; i <= n; i++)
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        // cout<<fibonacci[0];
        return fibonacci[n];
    }
};