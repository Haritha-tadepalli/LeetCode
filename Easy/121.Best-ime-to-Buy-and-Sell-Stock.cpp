//Question: https://leetcode.com/problems/best-time-to-buy-and-sell-stock
//Solution: https://leetcode.com/submissions/detail/884940745/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, currMin = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(currMin > prices[i]){
                currMin = prices[i];
            }
            else{
                maxProfit = max(maxProfit, prices[i] - currMin);
            }
        }
        return maxProfit;
    }
};