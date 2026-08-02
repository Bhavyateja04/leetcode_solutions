class Solution {
public:
    vector<vector<int>> dp;

    int helper(vector<int>& piles, int i, int j) {
        if (i == j)
            return piles[i];
        if (dp[i][j] != -1)
            return dp[i][j];

        int pickLeft = piles[i] - helper(piles, i + 1, j);

        int pickRight = piles[j] - helper(piles, i, j - 1);

        return dp[i][j] = max(pickLeft, pickRight);
    }

    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        dp.assign(n, vector<int>(n, -1));

        return helper(piles, 0, n - 1) >= 0;
    }
};