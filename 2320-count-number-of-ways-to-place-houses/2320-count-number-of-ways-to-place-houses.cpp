class Solution {
public:
    int countHousePlacements(int n) {
        if(n == 1) return 4;
        const int mod = 1000000000 + 7;
        long long dp[n + 1];
        dp[0] = 0;
        dp[1] = 2;
        dp[2] = 3;
        for(int i = 3; i <= n; ++i) dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
        return (dp[n] * dp[n]) % mod;
    }
};