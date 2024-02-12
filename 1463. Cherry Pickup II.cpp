
/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-





class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int row=grid.size(), col=grid[0].size();
        int dp[2][70][70]={0};
        
        for (int c0=0; c0<col; c0++)
            for(int c1=c0+1; c1<col; c1++){
               dp[(row-1)&1][c0][c1]=grid[row-1][c0]+grid[row-1][c1];
            }
        for (int r=row-2; r>=0; r--) {
            for(int c0=0; c0<col; c0++)
                for(int c1=c0+1; c1<col; c1++){
                    int cherry=grid[r][c0]+grid[r][c1];
                    int next=0;
                    for (int d0=max(0, c0-1); d0<=min(col-1,c0+1); d0++){
                        for(int d1=max(0, c1-1); d1<=min(col-1,c1+1); d1++){
                            next=max(next, dp[(r+1)&1][d0][d1]);
                        }
                    }
                    dp[r&1][c0][c1]=next+cherry;
                }

        }  

        return dp[0][0][col-1];
    }
};