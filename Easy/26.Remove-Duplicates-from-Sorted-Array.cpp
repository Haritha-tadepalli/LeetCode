/*
Question: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Solution: https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/841297140/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = 0, ans = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[prev]){
                prev = i;
                ans++;
            }
            else
                nums[i] = 101;
        }
        sort(nums.begin(), nums.end());
        return ans;
    }
};