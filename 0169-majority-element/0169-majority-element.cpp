class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int maxi=0;
        int  ele;
        for(auto num :nums){
            mp[num]++;
            if(maxi<mp[num]){
                maxi=mp[num];
                ele=num;
            }
        }
        return ele;
        

        
    }
};