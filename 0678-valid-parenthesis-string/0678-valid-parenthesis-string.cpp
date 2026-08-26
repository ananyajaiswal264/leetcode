class Solution {
public:
    bool f(string &s,int i,int cnt,vector<vector<int>>&dp){
        if(cnt<0) return false;
        if(i==s.length()){
            return cnt==0;
        }
        if(dp[i][cnt]!=-1) return dp[i][cnt];
        if(s[i]=='(') return f(s,i+1,cnt+1,dp);
        if(s[i]==')') return f(s,i+1,cnt-1,dp);
        return dp[i][cnt]=f(s,i+1,cnt+1,dp) || f(s,i+1,cnt-1,dp) || f(s,i+1,cnt,dp);

    }
    bool checkValidString(string s) {
        int n =s.length();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int cnt=0;
        return f(s,0,cnt,dp);
        
    }
};