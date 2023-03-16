/*
Question: https://leetcode.com/problems/number-of-islands/
Solution: https://leetcode.com/problems/number-of-islands/submissions/916417925/
*/

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size(), col = grid[0].size(), count = 0;
        vector<vector<bool>> visited(row, vector<bool>(col, 0));
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == '1' && !visited[i][j]){
                    helper(grid, visited, i, j, row, col);
                    count++;
                } 
            }
        }
        return count;
    }

    void helper(vector<vector<char>> &grid, vector<vector<bool>> &visited, int x, int y, int row, int col){
        vector<pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        visited[x][y] = true;
        for(auto dir : dirs){
            int a = x + dir.first;
            int b = y + dir.second;
            if(a >= 0 && b >= 0 && a < row && b < col){
                if(!visited[a][b] && grid[a][b] == '1'){
                    visited[a][b] = true;
                    helper(grid, visited, a, b, row, col);
                }
                else{
                    visited[a][b] = true;
                }
            }
        }
    }
};