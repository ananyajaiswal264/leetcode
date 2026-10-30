class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& nums) {
        vector<vector<int>>adj(n);
        for(auto e:nums){
            adj[e[1]].push_back(e[0]);
        }
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++){
            for(auto nei:adj[i]){
                indegree[nei]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int count=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            count++;
            for(auto nei:adj[node]){
                indegree[nei]--;
                if(indegree[nei]==0) q.push(nei);
            }
        }
        return count==n;
        
    }
};