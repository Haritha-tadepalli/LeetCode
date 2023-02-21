/*
Question: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
Solution: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/submissions/902238038/
*/

class Solution {
public:

    int binarysearch(vector<int> &grid, int l, int r){
        int mid;
        while(l <= r){
            mid = l + ( r - l ) / 2;
            if(grid[mid] < 0){
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        return l;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int negcount = 0, col = grid[0].size();
        for(int i = 0; i < grid.size(); i++){
            int x = binarysearch(grid[i], 0, col - 1);
            negcount += col - x;
        }
        return negcount;
    }
};