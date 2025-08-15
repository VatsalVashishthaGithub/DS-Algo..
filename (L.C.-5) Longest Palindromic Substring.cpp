class Solution {
public: 
    // isme har ek point pe jaake mai vahi se palindrome check kr rha hu..
    // but isme doo condition matter krenge..
    // ek too odd length, aur ek even length..
    string longestPalindrome(string s) {
        int n = s.length();
        int maxLen = 0;
        pair<int,int> indices;
        for(int i=0; i<n; i++){
            // when the length is even..
            int l = i, r = i+1;
            while(l >= 0 && r < n && s[l] == s[r]){
                int len = r-l+1;
                if(len > maxLen){
                    maxLen = len;
                    indices = {l,len};
                }
                l--;
                r++;
            }

            // when the length is odd..
            l = i, r = i;
            while(l >= 0 && r < n && s[l] == s[r]){
                int len = r-l+1;
                if(len > maxLen){
                    maxLen = len;
                    indices = {l,len};
                }
                l--;
                r++;
            }
            
        }
        string res = s.substr(indices.first,indices.second);
        return res;
    }
};
