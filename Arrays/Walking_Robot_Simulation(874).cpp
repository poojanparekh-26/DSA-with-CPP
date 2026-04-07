class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        set<pair<int,int>> obs;
        
        for(auto &o : obstacles)
            obs.insert({o[0], o[1]});
        
        vector<pair<int,int>> dir = {
            {0,1},   // north
            {1,0},   // east
            {0,-1},  // south
            {-1,0}   // west
        };
        
        int d = 0;
        int x = 0, y = 0;
        int ans = 0;
        
        for(int c : commands){
            
            if(c == -1)
                d = (d + 1) % 4;
            
            else if(c == -2)
                d = (d + 3) % 4;
            
            else{
                
                for(int i = 0; i < c; i++){
                    
                    int nx = x + dir[d].first;
                    int ny = y + dir[d].second;
                    
                    if(obs.count({nx, ny}))
                        break;
                    
                    x = nx;
                    y = ny;
                    
                    ans = max(ans, x*x + y*y);
                }
            }
        }
        
        return ans;
    }
};