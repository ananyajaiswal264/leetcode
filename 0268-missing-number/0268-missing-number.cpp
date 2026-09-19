class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<=n;i++){
            if(mp.find(i)==mp.end()) return i;
        }
        return -1;
    }
};