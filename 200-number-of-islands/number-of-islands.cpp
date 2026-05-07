class Solution {
public:

    void dfs(int i, int j,
             vector<vector<char>>& grid,
             vector<vector<int>>& visit) {

        int m = grid.size();
        int n = grid[0].size();

        if (i < 0 || j < 0 || i >= m || j >= n)
            return;

        if (grid[i][j] == '0' || visit[i][j] == 1)
            return;
        visit[i][j] = 1;

        dfs(i + 1, j, grid, visit); 
        dfs(i - 1, j, grid, visit);
        dfs(i, j + 1, grid, visit); 
        dfs(i, j - 1, grid, visit); 
    }

    int numIslands(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int count = 0;

        vector<vector<int>> visit(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {

                if (grid[i][j] == '1' && visit[i][j] == 0) {

                    count++;

                    dfs(i, j, grid, visit);
                }
            }
        }

        return count;
    }
};