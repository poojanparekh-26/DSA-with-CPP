class Solution {
public:
    int solve(int m , int n , vector<vector<int >>& dp, int r , int c  ) 
    {
        if (r == m - 1   &&  c == n- 1 ) return 1;
        if (r >= m || c >= n ) return 0 ;
        if(dp[r][c] != -1 ) return dp[r][c] ; 
        return dp[r][c] =  solve (m , n , dp , r + 1 , c ) + solve (m , n , dp , r , c+1 ) ;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int >> dp(m + 1 , vector<int >(n+1 , -1) ) ;

       return solve (m ,  n  , dp , 0 , 0 ) ;

    }
};