class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int>mp;
        for(int e :nums){
            mp[e]++;
            if(mp[e]>n/2){
                return e;
            }
        }
        
        return -1;
    }
};