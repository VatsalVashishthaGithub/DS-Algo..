class Solution {
public:
    int m,n;
    int solve(string& s1, string& s2, int i, int j, vector<vector<int>>& dp){
        if(i >= m || j >= n) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int first = 0, second = 0;
        if(s1[i] == s2[j]){
            return dp[i][j] = 1 + solve(s1,s2,i+1,j+1,dp);
        }
        first = solve(s1,s2,i+1,j,dp);
        second = solve(s1,s2,i,j+1,dp);
        return dp[i][j] = max(first,second);
    }
    int longestCommonSubsequence(string text1, string text2) {
        m = text1.length();
        n = text2.length();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(text1,text2,0,0,dp);
    }
};
