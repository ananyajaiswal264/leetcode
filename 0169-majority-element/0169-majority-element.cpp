class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int>mp;
        for(int e :nums){
            mp[e]++;
        }
        for(auto e:mp){
            if(e.second>n/2){
                return e.first;
            }

        }
        return -1;
    }
};