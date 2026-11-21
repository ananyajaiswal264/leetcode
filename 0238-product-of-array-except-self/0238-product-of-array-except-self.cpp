class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int>ans(n,1);
        int pref=1;
        int suff=1;
        for(int i=1;i<n;i++){
            pref=pref*nums[i-1];
            ans[i]=pref;
        }
        for(int i=n-2;i>=0;i--){
            suff=suff*nums[i+1];
            ans[i]=ans[i]*suff;
        }
        
        return ans;
        
    }
};