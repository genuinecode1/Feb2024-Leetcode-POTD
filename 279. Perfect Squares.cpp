/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-



class Solution {
    int solve(int n,vector<int>& dp){
        if (n==0)
        return 0;
        
        if(dp[n]!=-1)
        return dp[n];
        
        int mini = INT_MAX;
        for(int i=1;i*i<=n;i++){
           int temp = 1 + solve(n-i*i,dp);
           mini = min(mini,temp); 
        }
        return dp[n]=mini;
    }
public:
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};