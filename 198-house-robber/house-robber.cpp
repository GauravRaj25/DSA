class Solution {
public:
    // int solveMem(vector<int>& nums, int i, vector<int>& dp){
    //     // Base case
    //     if(i >= nums.size()) return 0;

    //     if(dp[i] != -1){
    //         return dp[i];
    //     }

    //     int include = nums[i] + solveMem(nums, i+2, dp);
    //     int exclude = 0 + solveMem(nums, i+1, dp);
    //     dp[i] = max(include, exclude);

    //     return dp[i];

    // }

    // int solveTab(vector<int>& nums, vector<int>& dp){
    //     // converting base case into dp array 
    //     int n = nums.size();
    //     dp[n] = 0;

    //     // run a loop from n to 0
    //     for(int i=n-1; i>=0; i--){
    //         int include = nums[i] + dp[i+2];
    //         int exclude = 0 + dp[i+1];
    //         dp[i] = max(include, exclude);
    //     }
    //     return dp[0];
    // }

    int solveSpace(vector<int>& nums, vector<int>& dp){
        int n = nums.size();
        int curr;
        int next1 = 0;
        int next2 = 0;

        for(int i=n-1; i>=0; i--){
            int include = nums[i] + next2;
            int exclude = 0 + next1;
            int curr = max(include, exclude);

            next2 = next1;
            next1 = curr;
        }
        return next1;


    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+2, 0);
        // int i = 0;
        // return solveMem(nums, i, dp);

        // return solveTab(nums, dp);
        return solveSpace(nums, dp);
    }
};