/*
Question: https://leetcode.com/problems/sort-colors/
Solution: https://leetcode.com/problems/sort-colors/submissions/924090797/
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int one = 0, two = len - 1, zero = 0;
        while(one <= two){
            if(nums[one] == 0){
                swap(nums[one], nums[zero]);
                one++; zero++;
            }
            else if(nums[one] == 2){
                swap(nums[one], nums[two]);
                two--;
            }
            else
                one++;
        }
    }
};