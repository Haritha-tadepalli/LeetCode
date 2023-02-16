/*
Question: https://leetcode.com/problems/counting-bits/
Solution: https://leetcode.com/problems/counting-bits/submissions/898935952/
**/

class Solution {
public:
    vector<int> ans;
    void bits(int n){
        int count = 0, i = n;
        if(n == 0){
            ans[0] = 0;
            return;
        }
        while(n){
            if(ans[n] != -1){
                ans[i] = ans[n] + count;
                return;
            }
            count += n & 1;
            n >>= 1;
        }
        ans[i] = count;
        return;
    }
    vector<int> countBits(int n) {
        ans.resize(n  + 1, -1);
        for(int i = 0; i <= n; i++){
            bits(i);
        }
        return ans;
    }
};