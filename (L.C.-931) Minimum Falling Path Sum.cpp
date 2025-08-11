class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dp(n, vector<int>(n));
        // storing the lat row elements in the dp vector's last row itself..
        for(int j=0; j<n; j++){
            dp[n-1][j] = grid[n-1][j];
        }
        int minPath = INT_MAX;
        // tabulation approach..
        for(int i=n-2; i>=0; i--){
            for(int j=0; j<n; j++){
                int left_diag = INT_MAX;
                int right_diag = INT_MAX;
                int down = grid[i][j] + dp[i+1][j];

                if(j-1 >= 0){
                    left_diag = grid[i][j] + dp[i+1][j-1];
                }
                if(j+1 < n){
                    right_diag = grid[i][j] + dp[i+1][j+1];
                }
                dp[i][j] = min(min(left_diag,right_diag), down);
            }
        }
        for(int j=0; j<n; j++){
            minPath = min(minPath,dp[0][j]);
        }
        return minPath;
    }
};
