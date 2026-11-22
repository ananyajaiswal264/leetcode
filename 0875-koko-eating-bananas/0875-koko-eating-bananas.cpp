class Solution {
public:
    bool helper(int k ,vector<int>&nums,int h){
        long long count =0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<=k) count++;
            else {
                if(nums[i]%k==0){
                    count+=(nums[i]/k);
                }
                else count+=(nums[i]/k)+1;
            }
        }
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n =piles.size();
        int lo=1;
        int hi=INT_MIN;
        for(int i=0;i<n;i++){
            hi=max(hi,piles[i]);
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(helper(mid,piles,h)==true) hi=mid-1;
            else lo=mid+1;
        }
        return lo;
        
    }
};