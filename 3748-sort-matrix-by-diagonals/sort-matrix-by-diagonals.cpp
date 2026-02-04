class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, vector<int>> mp;

        // Step 1: Store diagonals
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mp[i - j].push_back(grid[i][j]);
            }
        }

        // Step 2: Sort diagonals
        for (auto &it : mp) {
            if (it.first >= 0) {
                // bottom-left triangle → descending
                sort(it.second.begin(), it.second.end(), greater<int>());
            } else {
                // top-right triangle → ascending
                sort(it.second.begin(), it.second.end());
            }
        }

        // Step 3: Refill matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = mp[i - j].front();
                mp[i - j].erase(mp[i - j].begin());
            }
        }

        return grid;
    }
};
