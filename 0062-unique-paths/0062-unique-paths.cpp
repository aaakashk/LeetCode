class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[n];
        for(int j = 0; j < n; ++j) dp[j] = 1;

        for(int i = 1; i < m; ++i) {
            for(int j = 1; j < n; ++j) {
                dp[j] = dp[j - 1] + dp[j];
            }
        }
        return dp[n - 1];
    }
};