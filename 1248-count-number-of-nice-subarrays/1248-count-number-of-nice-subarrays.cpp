class Solution {
public:
    int helper(vector<int>&nums,int goal){
        int n =nums.size();
        int l=0,r=0,cnt=0,sum=0;
        while(r<n){
            sum+=nums[r]%2;
            while(sum>goal){
                sum-=nums[l]%2;
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n =nums.size();
        int count=helper(nums,k)-helper(nums,k-1);
        return count ;

        
        
    }
};