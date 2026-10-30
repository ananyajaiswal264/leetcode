class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& nums) {
        vector<vector<int>>adj(n);
        vector<int>indegree(n);
        vector<int>ans;
        for(auto e:nums){
            adj[e[1]].push_back(e[0]); 
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            for(auto nei:adj[i]){
                indegree[nei]++;

            }
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto nei:adj[node]){
                indegree[nei]--;
                if(indegree[nei]==0){
                    q.push(nei);
                }
            }
        }
        if(ans.size()!=n) return {};
        return ans;
    }
};