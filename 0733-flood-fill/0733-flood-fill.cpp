class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m =image.size();
        int n =image[0].size();
        vector<vector<int>>ans=image;
        vector<vector<int>>vis(m,vector<int>(n,0));
        ans[sr][sc]=color;
        int orgColor=image[sr][sc];
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        queue<pair<int,int>>q;
        q.push({sr,sc});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=row+dx[i];
                int nc=col+dy[i];
                if(nr>=0 && nr<m && nc>=0 && nc<n && image[nr][nc]==orgColor && !vis[nr][nc]){
                    vis[nr][nc]=1;
                    ans[nr][nc]=color;
                    q.push({nr,nc});
                }
            }

        }
        return ans;
    }
};