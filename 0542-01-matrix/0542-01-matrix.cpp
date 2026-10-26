class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m =mat.size();
        int n =mat[0].size();
        vector<vector<int>>ans(m,vector<int>(n,INT_MAX));
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    ans[i][j]=0;
                }
            }
        }
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int dist=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dx[i];
                int nc=c+dy[i];
                if(nr>=0 && nr<m && nc>=0 && nc<n && !vis[nr][nc] && mat[nr][nc]==1){
                    vis[nr][nc]=1;
                    q.push({{nr,nc},dist+1});
                    ans[nr][nc]=dist+1;
                }
            }
        }
        return ans;

        
    }
};