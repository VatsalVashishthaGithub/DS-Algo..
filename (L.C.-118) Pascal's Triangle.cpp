class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        result.push_back({1});
        for(int i=0; i<numRows-1; i++){
            vector<int> vec;
            vec.push_back(1);
            int sz = result[i].size();
            for(int j=0; j<sz-1; j++){
                vec.push_back(result[i][j] + result[i][j+1]);
            }
            vec.push_back(1);
            result.push_back(vec);
        }
        return result;
    }
};
