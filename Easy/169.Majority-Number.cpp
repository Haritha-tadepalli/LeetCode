/*
Question: https://leetcode.com/problems/majority-element/
Solution: https://leetcode.com/problems/majority-element/submissions/876056348/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxNum = INT_MIN, maxCount = 0, i = 0;
        sort(nums.begin(), nums.end());
        while(i < nums.size()){
            int x = count(nums.begin(), nums.end(), nums[i]);
            if(x > maxCount){
                maxNum = nums[i];
                maxCount = x;
            }
            i = i + x;
        }
        return maxNum;
    }
};