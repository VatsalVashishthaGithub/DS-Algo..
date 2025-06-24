// Example:
// Citations: [3, 0, 6, 1, 5]
// Sorted Citations (descending order): [6, 5, 3, 1, 0]
// Check:
// 1 paper has ≥ 1 citation (6).
// 2 papers have ≥ 2 citations (6, 5).
// 3 papers have ≥ 3 citations (6, 5, 3).

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int cnt = 0;
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        for(int i=0; i<n; i++){
            if(citations[i] >= i+1){
                cnt++;
            }else{
                return cnt;
            }
        }
        return cnt;
    }
};
