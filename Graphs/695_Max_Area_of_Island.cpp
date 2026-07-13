class Solution {
public:
    int dfs(int sr , int sc , vector<vector<int >>&vis , int &cnt , vector<vector<int >>&grid ) 
    {
        int n  = grid.size();
        int m = grid[0].size();
        vis[sr][sc] = 1 ;
        cnt++;
        int dr[] = {-1,1,0,0} ;
        int dc[] = {0 , 0 , -1 , 1 };
        for (int i = 0 ; i < 4  ;i++ ) 
        {
            int nr = dr[i] + sr ;
            int nc = dc[i] + sc ;
            if (nr >= 0 && nc >= 0 && nr < n && nc < m) 
            {
                if (grid[nr][nc ] == 1 && !vis[nr][nc] ) 
                {
                    dfs(nr , nc , vis , cnt  , grid ) ;
                }
            }
        }
        return cnt ;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        //  1 
        int n = grid.size();
        int m = grid[0].size();
        vector<vector <int >>vis (n , vector<int > (m , 0) ) ;
        int cnt = 0 ;
        int ans = 0 ;
        int maxans = 0 ;
        for (int i = 0 ; i < n ; i++ ) 
        {
            for (int j = 0 ; j < m ; j++ ) 
            {
                if(!vis[i][j] && grid[i][j] == 1 ) 
                {
                    cnt =  0;
                    ans = dfs(i , j , vis , cnt , grid ) ;
                    maxans = max(ans , maxans) ;
                }
            }
        }
        return maxans  ;
    }
};