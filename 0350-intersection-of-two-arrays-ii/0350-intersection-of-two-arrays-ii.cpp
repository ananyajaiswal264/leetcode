class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto e:nums1){
            mp[e]++;    
        }
        for(auto e:nums2){
            if(mp.find(e)!=mp.end()){
                mp[e]--;
                if(mp[e]>=0){
                    ans.push_back(e);
                }
            }
        }
        return ans;
        
    }
};