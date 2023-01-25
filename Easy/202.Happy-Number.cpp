/**
*Question: https://leetcode.com/problems/happy-number/git
*Solution: https://leetcode.com/problems/happy-number/submissions/885183824/
*/

#include<bits/stdcpp.h>
using namespace std;

class Solution {
public:
    int nextNum(int n){
        int res = 0; 
        while(n > 0){
            res = res + pow(n % 10, 2);
            n = n / 10;
        }
        return res;
    }
    
    bool isHappy(int n) {
        int slow = n, fast = nextNum(n);
        while(fast != 1 && slow != fast){
            slow = nextNum(slow);
            fast = nextNum(nextNum(fast));
        }
        return fast == 1;
    }
};