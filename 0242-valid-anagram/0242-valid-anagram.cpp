class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mp;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            
            mp[t[i]]--;
            if(mp[t[i]]<0) return false;
        }
        return true;

        
    }
};