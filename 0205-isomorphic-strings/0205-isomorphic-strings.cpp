class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m=s.length(),n=t.length();
        unordered_map<char,char>mp,mm ;
        if(m!=n ) return false;
        for(int i=0;i<m;i++){
            if(mp.find(s[i]) !=mp.end() && mp[s[i]]!=t[i]) return false;
            mp[s[i]]=t[i];
            if(mm.find(t[i]) !=mm.end() && mm[t[i]]!=s[i]) return false;
            mm[t[i]]=s[i];
            
        }

        
        return  true;



        
    }
};