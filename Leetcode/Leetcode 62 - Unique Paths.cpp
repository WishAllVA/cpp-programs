class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return func(m, n, dp);
    }
    int func(int m, int n, vector<vector<int>> &dp)
    {
        if (dp[m][n] != -1)
            return dp[m][n];
        if (m == 0 || n == 0)
            return 0;
        if (m == 1 || n == 1)
            return 1;
        dp[m][n] = func(m - 1, n, dp) + func(m, n - 1, dp);
        return dp[m][n];
    }
};