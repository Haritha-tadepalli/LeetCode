/*
Question: https://leetcode.com/problems/find-target-indices-after-sorting-array/
Solution: https://leetcode.com/problems/find-target-indices-after-sorting-array/submissions/901288795/
*/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> indexes;
        int low = -1, high = -1, l, r, mid;
        l = 0; r = nums.size() - 1;
        while(l <= r){
            mid = l + ((r - l) / 2);
            if(nums[mid] == target){
                low = mid;
                r = mid - 1;
            }
            else if(nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        l = 0; r = nums.size() - 1;
        while(l <= r){
            mid = l + ((r - l) / 2);
            if(nums[mid] == target){
                high = mid;
                l = mid + 1;
            }
            else if(nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        if(low == -1 && high == -1)
            return indexes;
        for(int i = low; i <= high; i++)
            indexes.push_back(i);
        return indexes;
    }
};