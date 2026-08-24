class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int>prev(n),suf(n);
        prev[0]=1;
        suf[n-1]=1;
        for(int i=1;i<n;i++){
            prev[i]=nums[i-1]*prev[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=nums[i+1]*suf[i+1];
        }
        for(int i=0;i<n;i++){
            nums[i]=prev[i]*suf[i];
        }
        return nums;

    }
};