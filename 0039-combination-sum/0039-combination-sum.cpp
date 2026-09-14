class Solution {
public:
    vector<vector<int>>ans;

    void helper(int idx,vector<int>& candidates, int target,vector<int>&curr){
        if(target==0){
            ans.push_back(curr);
            return ;
        }
        if(idx>=candidates.size()) return;
        if(candidates[idx]<=target){ 
            curr.push_back(candidates[idx]);
            helper(idx,candidates,target-candidates[idx],curr);
            curr.pop_back();
            }
        helper(idx+1,candidates,target,curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>curr;
        helper(0,candidates,target,curr);
        return ans;
        
    }
};