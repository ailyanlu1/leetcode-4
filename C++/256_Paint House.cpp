class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        int n = (int)costs.size();
        if (n == 0)
            return 0;
        vector<vector<int> > dp(n, vector<int>(3, 0));
        dp[0][0] = costs[0][0], dp[0][1] = costs[0][1];
        dp[0][2] = costs[0][2];
        for (int i = 1; i < n; i++) {
            dp[i][0] = costs[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] = costs[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = costs[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
        }
        return min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2]));
    }
};