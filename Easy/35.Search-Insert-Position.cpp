/*
Question: https://leetcode.com/problems/search-insert-position/
Solution: https://leetcode.com/problems/search-insert-position/submissions/901280228/
*/

class Solution {
public:

    int binarySearch(vector<int> &nums, int target, int l, int r){
        int mid = l + ((r - l) / 2), prev = mid;
        if(l <= r){
            if(nums[mid] == target)     
                return mid;
            else if(nums[mid] < target)      
                return binarySearch(nums, target, mid + 1, r);
            else{
                prev = mid;
                return binarySearch(nums, target, l, mid - 1);
            }
            
        }
        return prev;
    }

    int searchInsert(vector<int>& nums, int target) {
        int ans = binarySearch(nums, target, 0, nums.size() - 1);
        return ans;
    }
};