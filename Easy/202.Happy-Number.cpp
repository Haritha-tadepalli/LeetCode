/**
*Question: https://leetcode.com/problems/happy-number/
*Solution: https://leetcode.com/submissions/detail/875295976/
*/

#include<bits/stdcpp.h>
using namespace std;

class Solution {
public:
    unordered_map<int, bool> visited;
    bool happy(int n){
        if(visited[n])
            return false;
        if(n == 1)
            return true;
        int next = 0;
        visited[n] = true;
        while(n > 0){
            int x = n % 10;
            next += x * x;
            n = n / 10;
        }
        return happy(next);
    }
    bool isHappy(int n) {
        //visited[n] = true;
        return happy(n);
    }
};