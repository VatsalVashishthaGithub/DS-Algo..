class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> repeat;
        for(int i=0; i<n-1; i++){
            int val = nums[i] + nums[i+1];
            if(repeat.count(val)){
                return true;
            }
            repeat.insert(val);
        }
        return false;
    }
};
