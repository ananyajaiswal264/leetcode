class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;
        
        for(auto e:nums1){
            st.insert(e);
        }
        unordered_set<int>s;
        for(auto e:nums2){
            if(st.find(e)!=st.end()){
                s.insert(e);
            }
        }
        vector<int>ans(s.begin(),s.end());
        return ans;
        
    }
};