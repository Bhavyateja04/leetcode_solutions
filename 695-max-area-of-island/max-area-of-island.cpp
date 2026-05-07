class Solution {
public:

    int dfs(int i, int j,
             vector<vector<int>>& grid,
             vector<vector<int>>& visit) {

        int m = grid.size();
        int n = grid[0].size();

        if (i < 0 || j < 0 || i >= m || j >= n)
            return 0;

        if (grid[i][j] == 0|| visit[i][j] == 1)
            return 0;
        visit[i][j] = 1;
        int area=1;
        area+= dfs(i + 1, j, grid, visit); 
         area+=dfs(i - 1, j, grid, visit);
         area+=dfs(i, j + 1, grid, visit); 
         area+=dfs(i, j - 1, grid, visit); 
        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int maxArea = 0;

        vector<vector<int>> visit(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {

                if (grid[i][j] == 1 && visit[i][j] == 0) {

                   int area=dfs(i, j, grid, visit);
                   maxArea=max(maxArea,area);

                }
            }
        }

        return maxArea;
    }
};
   