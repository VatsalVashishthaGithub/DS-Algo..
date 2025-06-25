// it is similar to the question no. (L.C.-1456) Maximum no. of vowels..

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int l=0, r=0;
        int cnt = 0, maxCnt = 0;
        while(r < n){
            int elem = nums[r];
            if(elem == 1){
                cnt++;
                maxCnt = max(cnt,maxCnt);
            }
            int window_len = (r-l+1);
            if(window_len-cnt > 1){
                if(nums[l] == 1){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        if(maxCnt == n) return maxCnt-1;
        return maxCnt;
    }
};
