/*
Question: https://leetcode.com/problems/prime-in-diagonal/
Solution: https://leetcode.com/problems/prime-in-diagonal/submissions/931641594/
*/

class Solution {
public:
    bool isPrime(int n){
        if(n <= 1)
            return false;
        if(n <= 3)
            return true;
        if(n % 2 == 0 || n % 3 == 0)
            return false;
        for(int i = 5; i * i <= n; i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int maxPrime = 0, row = nums.size(), col = nums[0].size();
        for(int i = 0; i < row; i++){
            if(isPrime(nums[i][i]))
                maxPrime = max(maxPrime, nums[i][i]);
            if(isPrime(nums[i][row - i - 1]))
                maxPrime = max(maxPrime, nums[i][row - i - 1]);
        }
        return maxPrime;
    }
};