/**
Question: https://leetcode.com/problems/two-sum
Solution: https://leetcode.com/problems/two-sum/submissions/860569566/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index;
        index[nums[0]] = 1;
        for(int i = 1; i < nums.size(); i++){
            if(index[target - nums[i]] != 0)
                return {i, index[target - nums[i]] - 1};
            index[nums[i]] = i + 1;
        }
        return {};
    }
};