/**
*Question:
*Solution:
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        int x = nums[0];
        for(int i = 1; i < nums.size(); i++){
            x = x ^ nums[i];
        }
        return x;
    }
};