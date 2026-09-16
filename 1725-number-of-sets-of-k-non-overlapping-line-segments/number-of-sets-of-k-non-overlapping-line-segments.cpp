class Solution {
public:
    int numberOfSets(int n, int k) {
        int MOD = 1e9+7;

        vector<vector<long long>>dp(k+1,vector<long long>(n,0));

        //0 segments can always be chosen in exactly 1 way
        for(int j=0;j<n;j++) dp[0][j]=1;

        for(int i=1;i<=k;i++){
            long long prefix = 0;
            for(int j=1;j<n;j++){
                //dp[i-1][0.....j-1]
                prefix = (prefix+dp[i-1][j-1]) %MOD;

                dp[i][j] = (dp[i][j-1] + prefix)%MOD;
            }
        } 
        return dp[k][n-1];
    }
};