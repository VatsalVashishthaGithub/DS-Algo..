class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.length();
        int cnt = 0;
        char prev = word[0];
        // here, cnt will update when any duplicates occur..
        for(int i=1; i<n; i++) {
            if(word[i] == prev){
                cnt++;
            }
            prev = word[i];
        }
        return cnt+1;   // adding 1 with cnt, bcz here the origina word is also a possible string..
    }
};
