// Easy question..
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mpp;
        for(auto x : arr){
            mpp[x]++;
        }
        vector<int> vec;
        for(auto i : mpp){
            vec.push_back(i.second);
        }
        sort(vec.begin(),vec.end());
        for(int i=1; i<vec.size(); i++){
            if(vec[i] == vec[i-1]) return false;
        }
        return true;
    }
};
