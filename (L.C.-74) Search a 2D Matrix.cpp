// here;
// 1. Firstly we will find the correct row 
// 2. Secondly, find the target value for each column in that row

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m==1 && n==1) return matrix[0][0]==target;
        int stRow=0, endRow=m-1;
        int stCol=0, endCol=n-1;
        int row = 0;
        while(stRow <= endRow){     // finding the correct row..
            int midRow = (stRow+endRow)/2;
            if(matrix[midRow][0]<=target && matrix[midRow][n-1]>=target){
                row = midRow;
                break;
            }else if(matrix[midRow][0] <= target){
                stRow = midRow+1;
            }else{
                endRow = midRow-1;
            }
        }
        while(stCol <= endCol){     // searching the element for each column in that row..
            int midCol = (stCol+endCol)/2;
            if(matrix[row][midCol] == target) return true;
            else if(matrix[row][midCol] <= target){
                stCol = midCol+1;
            }else{
                endCol = midCol-1;
            }
        }
        return false;
    }
};
