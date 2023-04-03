/*
Question: https://leetcode.com/problems/search-a-2d-matrix/
Solution: https://leetcode.com/problems/search-a-2d-matrix/submissions/924733136/
*/

class Solution {
public:
    bool binarySearch(vector<int> &matrix, int l, int r, int target){
        int mid;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(matrix[mid] == target)
                return true;
            else if(matrix[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag = false;
        int row = matrix.size(), col = matrix[0].size();
        for(auto x : matrix){
            if(x[0] <= target && x[col - 1] >= target){
                if(binarySearch(x, 0, col - 1, target))
                    return true;
            }
        }
        return flag;
    }
};