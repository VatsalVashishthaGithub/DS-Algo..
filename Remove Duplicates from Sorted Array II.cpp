class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0 || n==1){
            return n;
        }
        int i=2, j=2;
      // logic :: 
      // current value khud se 2 index vali value se same hogi too iska matlab hoga ki curr value ki frequency 2 se jyada hoo chuki hai..
        while(j < n){
            if(nums[i-2] != nums[j]){
                nums[i] = nums[j];
                i++;
            }
            j++;
        }
        return i;
    }
};
