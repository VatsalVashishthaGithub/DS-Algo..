class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.length();
        int n2 = str2.length();
        int n = min(n1,n2);
        int gcd = 1;
        for(int i=2; i<=n; i++){
            if(n1 % i == 0 && n2 % i == 0){
                gcd = max(gcd,i);
            }
        }
        string ans(str2.begin(), str2.begin()+gcd);
        if(str1+str2 == str2+str1){
            return ans;
        }else{

            return "";
        }
    }
};
