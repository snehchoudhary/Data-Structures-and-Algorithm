  dp[n] = (solveUsingMemo(n-1, k, dp) + solveUsingMemo(n-2, k, dp)) *(k-1);
    return dp[n];