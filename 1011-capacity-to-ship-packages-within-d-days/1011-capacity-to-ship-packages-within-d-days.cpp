class Solution {
public:
    bool helper(int cap,vector<int>&weights,int days){
        long long count=0;
        int c=cap;
        for(int i=0;i<weights.size();i++){
            if(c<weights[i]){
                c=cap;
                count ++;
                c = c - weights[i];
            }
            else {
                c=c-weights[i];
            }
        }
        if(count+1>days) return false;
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int lo=0,hi=0;
        for(int i=0;i<n;i++){ 
            lo=max(lo,weights[i]);
            hi=hi+weights[i];
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(helper(mid,weights,days)) hi=mid-1;
            else lo=mid+1;
        }
        return lo;


    }
};