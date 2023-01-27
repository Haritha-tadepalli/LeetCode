/*
Question: https://leetcode.com/problems/contains-duplicate/
Solution: https://leetcode.com/problems/contains-duplicate/submissions/875290378/
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> flag;
        for(auto x : nums){
            if(flag[x] == 1)
                return true;
            flag[x] = 1;
        }
        return false;
    }
};