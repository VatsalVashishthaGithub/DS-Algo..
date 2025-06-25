class Solution {
public:
    bool isVowel(char elem){    // my function..
        if(elem=='a'||elem=='e'||elem=='i'||elem=='o'||elem=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int n = s.length();
        int l=0, r=0;
        int vowel = 0, maxVowel = 0;
        while(r < n){
            char elem = s[r];
            if(isVowel(elem)){
                vowel++;
                maxVowel = max(vowel,maxVowel);
                if(maxVowel == k) return maxVowel;  // agr maxVowel ki value window ki max length ke equal hai, too vahi se return maar do..
            }
            int size = (r-l+1);
            if(size == k){
                if(isVowel(s[l])){
                    vowel--;
                }
                l++;
            }
            r++;
        }
        return maxVowel;
    }
};
