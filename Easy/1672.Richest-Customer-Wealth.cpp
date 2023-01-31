/*
Question: https://leetcode.com/problems/richest-customer-wealth/
Solution: https://leetcode.com/problems/richest-customer-wealth/submissions/888720622/
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size(), m = accounts[0].size(), maxWealth = 0;
        
        for(int i = 0; i < n; i++){
            int money = 0;
            money = accumulate(accounts[i].begin(), accounts[i].end(), money);
            maxWealth = max(money, maxWealth);
        }
        return maxWealth;
    }
};