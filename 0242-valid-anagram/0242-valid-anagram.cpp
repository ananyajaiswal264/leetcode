class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length();
        int n = t.length();
        unordered_map<char,int>mp;
        if(m!=n) return false;
        for(char c :s){
            mp[c]++;
        }
        for(char c :t){
            mp[c]--;
            if(mp[c]<0) return false;
        }
        return true;
    }
};