class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        vector<int> selected;

        int n = grid.size();

        for(int i = 0; i < n; i++) {
            sort(grid[i].begin(), grid[i].end(), greater<int>());

            for(int j = 0; j < min((int)grid[i].size(), limits[i]); j++) {
                selected.push_back(grid[i][j]);
            }
        }

        sort(selected.begin(), selected.end(), greater<int>());

        long long sum = 0;

        for(int i = 0; i < min(k, (int)selected.size()); i++) {
            sum += selected[i];
        }

        return sum;
    }
};