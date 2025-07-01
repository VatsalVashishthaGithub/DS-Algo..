// Very important question..

class Solution {
public:
    int solve(int idx, int sum, vector<int>& nums, vector<int>& dp){
        if(idx == 0){
            return nums[idx];
        }
        else if(idx < 0){
            return 0;
        }
        // pick..
        if(dp[idx] != -1){
            return dp[idx];
        }
        int pick = nums[idx] + solve(idx-2,sum,nums,dp);
        // not-pick..
        int not_pick = 0 + solve(idx-1,sum,nums,dp);
        return dp[idx] = max(pick,not_pick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> dp(n,-1);
        return solve(n-1,sum,nums,dp);
    }
};
