/*
Question: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
Solution: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/888724161/
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        while(n > 0){
            sum += n % 10;
            product *= n % 10;
            n = n / 10;
        }
        return product - sum;
    }
};