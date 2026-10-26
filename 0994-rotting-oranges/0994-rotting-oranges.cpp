class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m =grid.size();
        int n =grid[0].size();
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        int maxt=0;
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
        while(!q.empty()){
            auto it=q.front();
            int row=it.first.first;
            int col=it.first.second;
            int time=it.second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=row+dx[i];
                int nc=col+dy[i];
                if(nr>=0 && nr<m && nc>=0 && nc<n && !vis[nr][nc] && grid[nr][nc]==1){
                    vis[nr][nc]=1;
                    grid[nr][nc]=2;
                    maxt=max(maxt,time+1);
                    q.push({{nr,nc},time+1});
                }
            }
        }


        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)
                return -1;
            }
        }
        return maxt;
    }
};