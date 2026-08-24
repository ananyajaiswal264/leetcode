class Solution {
public:
    int jump(vector<int>& nums) {
        int n =nums.size();
        int l=0;
        int r=0;
        int count=0;
        for(int i=0;i<n-1;i++){
            r=max(r,i+nums[i]);
            if(i==l){
                count++;
                l=r;
            }
        }
        return count;
    }
};