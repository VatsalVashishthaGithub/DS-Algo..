class Solution {
public:
    // we are adding offset with sum while storing in the dp vector.. 
    // because the index for sum could also reach to any negative value, 
    // and that is why it we are adding the totalSum of the elements of nums, so that the overall index for dp could not go beyond {0,0}..
    int solve(vector<int>& nums, int idx, int sum, int target, vector<vector<int>>& dp, int offset){
        if(idx == nums.size()){
            if(sum == target) return 1;
            return 0;
        }
        if(dp[idx][sum + offset] != -1) return dp[idx][sum + offset];
        int plus = solve(nums,idx+1,sum+nums[idx],target,dp,offset);
        int minus = solve(nums,idx+1,sum-nums[idx],target,dp,offset);
        return dp[idx][sum + offset] = plus + minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        int offset = accumulate(nums.begin(),nums.end(),0);
        // offset ka matlab hai totalSum of all elements in the nums..
        // yaha pr size ko (2 * offset + 1) isliye liya hai, kyuki isme store hone vali values vary krengi from {-totalSum se +totalSum tk}..
        vector<vector<int>> dp(n,vector<int>(2 * offset + 1, -1));
        return solve(nums,0,sum,target,dp,offset);
    }
};
