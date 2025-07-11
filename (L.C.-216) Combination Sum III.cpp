class Solution {
public:
    vector<vector<int>> result;
    void solve(int i, int n, int k, int sum, vector<int>& ans){
        if(ans.size() == k){
            if(sum == n){
                result.push_back(ans);
            }
            return;
        }
        if(i > 9){
            return;
        }
        sum += i;
        ans.push_back(i);
        solve(i+1,n,k,sum,ans);
        sum -= i;
        ans.pop_back();
        solve(i+1,n,k,sum,ans);
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int sum = 0;
        result.clear();
        vector<int> ans;
        solve(1,n,k,sum,ans);
        return result;
    }
};
