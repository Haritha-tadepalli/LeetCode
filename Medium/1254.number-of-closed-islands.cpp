/*
Question: https://leetcode.com/problems/number-of-closed-islands/
Solution: https://leetcode.com/problems/number-of-closed-islands/submissions/915465597/
*/

class Solution {
public:

    bool bfs(int x, int y, int row, int col, vector<vector<bool>> &visited, vector<vector<int>> &grid){
        vector<pair<int, int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        queue<pair<int, int>> q;
        q.push({x, y});
        bool island = true;
        while(!q.empty()){
            x = q.front().first;
            y = q.front().second;
            q.pop();
            visited[x][y] = true;
            for(auto dir : dirs){
                int a = x + dir.first;
                int b = y + dir.second;
                if (a < 0 || a >= row || b < 0 || b >= col) {
                    island = false;
                } else if (grid[a][b] == 0 && !visited[a][b]) {
                    q.push({a, b});
                    visited[a][b] = true;
                }
            }
        }
        return island;
    }

    int closedIsland(vector<vector<int>>& grid) {
        int count = 0, row = grid.size(), col = grid[0].size();
        vector<vector<bool>> visited(row, vector<bool> (col, 0));
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 0 && !visited[i][j] && bfs(i, j, row, col, visited, grid))
                    count++;
            }
        }
        return count;
    }
};