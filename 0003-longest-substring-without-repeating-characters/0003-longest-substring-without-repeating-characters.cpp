class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.length();
        int l=0,r=0,maxi=0;
        unordered_map<int,int>mp;
        while(r<n){
            if(mp.find(s[r])!=mp.end() && l<=mp[s[r]]){
                l=mp[s[r]]+1;
            }
            int len=r-l+1;
            maxi = max(maxi, len);
            mp[s[r]]=r;
            r++;
        }
        return maxi;
    }
};