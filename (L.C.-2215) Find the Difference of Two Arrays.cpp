// Easy question..

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> sett1(nums1.begin(),nums1.end());
        unordered_set<int> sett2(nums2.begin(),nums2.end());
        vector<vector<int>> ans(2);
        for(auto y : sett1){
            if(sett2.find(y) == sett2.end()){
                ans[0].push_back(y);
            }
        }
        for(auto y : sett2){
            if(sett1.find(y) == sett1.end()){
                ans[1].push_back(y);
            }
        }
        return ans;
    }
};
