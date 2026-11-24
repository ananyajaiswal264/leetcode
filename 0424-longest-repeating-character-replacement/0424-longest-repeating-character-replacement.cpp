class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int l=0,r=0,maxlen=0,maxFreq=0;
        unordered_map<char,int>mp;

        while(r<n){
            mp[s[r]]++;
            maxFreq=max(maxFreq,mp[s[r]]);
            int len=r-l+1;
            if(len-maxFreq<=k){
                maxlen=max(maxlen,len);
            }
            else {
                mp[s[l]]--;
                l++;
                maxFreq=0;
                for(auto m :mp){
                    maxFreq=max(maxFreq,m.second);
                }
            }
            r++;
        }
        return maxlen;


        
    }
};