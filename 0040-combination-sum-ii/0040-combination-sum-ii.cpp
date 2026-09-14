class Solution {
public:
    vector<vector<int>>ans;

    void helper(vector<int>& candidates, int target, int i,vector<int>&curr){
        if(target==0){
            ans.push_back(curr);
            return ;
        }
        
        for(int j=i;j<candidates.size();j++){
            if(target < candidates[j] || (j > i && candidates[j] == candidates[j-1]))
 
                continue;
            curr.push_back(candidates[j]);
            helper(candidates,target-candidates[j],j+1,curr);
            curr.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>curr;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,0,curr);
        return ans;
        
    }
};