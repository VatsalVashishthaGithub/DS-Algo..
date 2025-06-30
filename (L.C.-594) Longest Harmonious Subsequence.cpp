class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        int len = 0;
        int maxLen = 0;
        int l=0, r=0;
        sort(nums.begin(), nums.end());
        while(r < n) {
            if(nums[r]-nums[l] == 1) {
                len = r-l+1;
                maxLen = max(maxLen, len);
                r++;
            }else if(nums[r]-nums[l] > 1) {
                l++;
            }else {
                r++;
            }
        }
        return maxLen;
    }
};
