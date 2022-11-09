class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();
        int dp[m + 1][n + 1];
        for(int i = 0; i <= m; ++i) dp[i][0] = 0;
        for(int i = 0; i <= n; ++i) dp[0][i] = 0;
        for(int i = 1; i <= m; ++i) {
            for(int j = 1; j <= n; ++j) {
                if(s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[m][n] == s.length();
        // int temp[m];
        // memset(temp,0,m);
        // int i=0,j=0;
        // bool flag = false;
        // while(i<n)
        // {
        //     if(t[i]==s[j])
        //     {
        //         temp[j] = i;
        //         i = i+temp[j];
        //         flag = true;
        //         j++;
        //     }
        //     else
        //     {
        //         i++;
        //     }
        // }
    }
};