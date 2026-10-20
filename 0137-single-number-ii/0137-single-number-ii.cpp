class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int n =nums.size();
        for(int i=0;i<32;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=(nums[j]>>i)&1;
            }
            ans=ans|(sum%3)<<i;

        }
        return ans;
        
        
    }
};