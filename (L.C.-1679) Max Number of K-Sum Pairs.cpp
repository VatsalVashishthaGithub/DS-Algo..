// simply applying binary search after sorting the array..

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0, r=n-1;
        int cnt = 0;
        sort(nums.begin(), nums.end());
        while(l < r){
            int sum = nums[l] + nums[r];
            if(sum == k){
                cnt++;
                l++;
                r--;
            }else if(sum < k){
                l++;
            }else{
                r--;
            }
        }
        return cnt;
    }
};
