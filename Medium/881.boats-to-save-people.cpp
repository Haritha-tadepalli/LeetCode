/*
Question: https://leetcode.com/problems/boats-to-save-people/
Solution: https://leetcode.com/problems/boats-to-save-people/submissions/926922407/
*/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int len = people.size(), l = 0, r = len - 1, boats = 0;
        while(l <= r){
            if(people[l] + people[r] <= limit){
                l++; r--;
            }
            else{
                r--;
            }
            boats++;
        }
        return boats;
    }
};