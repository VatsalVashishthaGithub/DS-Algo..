class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.length();
        int n2 = needle.length();
      // isme double loops hi lagenge
      // key points : 
      // 1. Iss loop me har ek (i)th index ke liye needle string ki value check hogi..
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
                if(j == n2-1){
                    return i;
                }
            }
        }
        return -1;
    }
};
