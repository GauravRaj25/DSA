class Solution {
public:

    int solveUsingMem(int n, vector<int> &dp){
        // 1. Base Case
        if(n == 0 || n == 1) return n;

        // 2. Check ans if already exist or not
        if(dp[n] != -1){
            return dp[n];
        }
        // 3. dp array me ans store krke return krdo
        dp[n] = solveUsingMem(n-1, dp) + solveUsingMem(n-2, dp);
        return dp[n];

    }
    int fib(int n) {
        // Create dp array and pass in function
        vector<int> dp(n+1, -1);
        return solveUsingMem(n, dp);
    }
};