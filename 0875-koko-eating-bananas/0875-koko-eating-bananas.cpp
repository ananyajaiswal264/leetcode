class Solution {
public:
    bool helper(int k,vector<int>&piles,int h ){
        long long count =0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=k){
                count++;
            }
            else{
                if(k!=0) count+=(piles[i]/k);
                if(k!=0) if(piles[i]%k) count++;

            }
        }
        if(count<=h) return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        if(n>h) return -1;
        int lo=1;
        int hi=1;
        for(int i=0;i<n;i++){
            hi=max(hi,piles[i]);
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(helper(mid,piles,h)) hi=mid-1;
            else lo=mid+1;
        }
        return lo;

        
    }
};