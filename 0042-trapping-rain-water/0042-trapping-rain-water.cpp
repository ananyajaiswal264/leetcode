class Solution {
public:
    int trap(vector<int>& nums) {
        int n =nums.size();
        if(n == 0) return 0;
        vector<int>prev(n,0);
        vector<int>next(n,0);
        for(int i=1;i<n;i++){
            prev[i]=max(prev[i-1],nums[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            next[i]=max(next[i+1],nums[i+1]);
        }
        vector<int>a(n);
        for(int i=0;i<n;i++){
            a[i]=min(prev[i],next[i]);

        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=max(0,a[i]-nums[i]);
        }
        return sum;
        
    }
};