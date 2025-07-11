class Solution {
public:
    int m,n;
    int drow[9] = {-1,-1,-1,0,0,0,1,1,1};
    int dcol[9] = {-1,0,1,-1,0,1,-1,0,1};
    void findAvg(int row, int col, vector<vector<int>>& img, vector<vector<int>>& new_img){
        int cnt = 0;
        int sum = 0;
        for(int i=0; i<9; i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n){
                sum += img[nrow][ncol];
                cnt++;
            }else{
                continue;
            }
        }
        int avg = sum/cnt;
        new_img[row][col] = avg;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        m = img.size();
        n = img[0].size();
        vector<vector<int>> new_img(m,vector<int>(n));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                findAvg(i,j,img,new_img);
            }
        }
        return new_img;
    }
};
