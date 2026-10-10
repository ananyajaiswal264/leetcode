class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n =nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int l=0;
        int r=k-1;
        double maxi=double(sum)/k;
        while(r<n-1){
            sum-=nums[l];
            l++;
            r++;
            sum+=nums[r];
            if(maxi < double(sum)/k){
                maxi=double(sum)/k;
            }
        }
        return maxi;
        
    }
};