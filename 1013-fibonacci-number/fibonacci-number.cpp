class Solution {
public:
    
    
    int solveUsingMem(int n){
    //    Memoisation Method
    //     1. Base Case
    //     if(n == 0 || n == 1) return n;

    //     2. Check ans if already exist or not
    //     if(dp[n] != -1){
    //         return dp[n];
    //     }
    //     3. dp array me ans store krke return krdo
    //     dp[n] = solveUsingMem(n-1, dp) + solveUsingMem(n-2, dp);
    //     return dp[n];
    
    // Tabulation Method
    //     if(n == 0 || n == 1) return n;
    //     Converting base into dp array
    //     dp[0] = 0;
    //     dp[1] = 1;

    //     /running loop from 0 to n
    //     for(int i=2; i<=n; i++){
    //         dp[i] = dp[i-1] + dp[i-2];
    //     }
    //     return dp[n];

    // Space Optimization
    if(n ==0 || n == 1) return n;
    int prev = 0;
    int curr = 1;

    for(int i=2; i<=n; i++){
        int ans = prev + curr;
        prev = curr;
        curr = ans;
    }
    return curr;

}
    int fib(int n) {
        // Create dp array and pass in function
        // vector<int> dp(n+1, -1);
        // return solveUsingMem(n, dp);

        return solveUsingMem(n);
    }
};