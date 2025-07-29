class Solution {
public:
    int solve(int m, int n, int i, int j, vector<vector<int>>& dp, vector<vector<int>>& grid){
        if(i == m-1 && j == n-1){
            return 1;
        }
        if(i >= m || j >= n) return 0;
        if(grid[i][j] == 1) return 0;
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int right = solve(m,n,i,j+1,dp,grid);
        int down = solve(m,n,i+1,j,dp,grid);
        
        return dp[i][j] = right + down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if(grid[m-1][n-1] == 1) return 0;
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return solve(m,n,0,0,dp,grid);
    }
};
