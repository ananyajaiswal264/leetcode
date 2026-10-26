class Solution {
public:
    void dfs(int row,int col,vector<vector<char>>&grid,vector<vector<int>>&vis){
        int m =grid.size();
        int n =grid[0].size();
        vis[row][col]=1;
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int nr=row+dx[i];
            int nc=col+dy[i];
            if(nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]=='1' && vis[nr][nc]==0){
                vis[nr][nc]=1;
                dfs(nr,nc,grid,vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m =grid.size();
        int n =grid[0].size();
        int count =0;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    dfs(i,j,grid,vis);
                    count++;
                }
            }
        }
        return count ;
        
    }
};