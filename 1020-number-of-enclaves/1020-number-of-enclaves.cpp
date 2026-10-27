class Solution {
public:

    void dfs(int row,int col,vector<vector<int>>&grid,vector<vector<int>>&vis){
        vis[row][col]=1;
        grid[row][col]=0;
        int m =grid.size();
        int n =grid[0].size();
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int r=row+dx[i];
            int c=col+dy[i];
            if(r>=0 && r< m && c>=0 && c<n && !vis[r][c] && grid[r][c]){
                dfs(r,c,grid,vis);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m =grid.size();
        int n =grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            if(grid[i][0] && !vis[i][0]) dfs(i,0,grid,vis);
            if(grid[i][n-1] && !vis[i][n-1]) dfs(i,n-1,grid,vis);
        }
        for(int j=0;j<n;j++){
            if(grid[0][j] && !vis[0][j]) dfs(0,j,grid,vis);
            if(grid[m-1][j] && !vis[m-1][j]) dfs(m-1,j,grid,vis);
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) count++;
            }
        }
        return count;

        
    }
};