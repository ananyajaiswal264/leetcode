class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n =fruits.size();
        unordered_map<int,int>mp;
        int l=0;
        int r=0;
        int maxlen=0;
        while(r<n){
            mp[fruits[r]]++;
            if(mp.size()>2){
                mp[fruits[l]]--;
                if(mp.find(fruits[l]) != mp.end() && mp[fruits[l]] == 0)
                    mp.erase(fruits[l]);
                l++;
            }
            if(mp.size()<=2){
                int len=r-l+1;
                maxlen=max(len,maxlen);
            }
            r++;
        }
        return maxlen;
        
    }
};