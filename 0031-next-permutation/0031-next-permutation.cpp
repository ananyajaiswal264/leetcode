class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n =nums.size();
        int idx=-1;


        // finding i where nums[i]<nums[i+1]
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }

        //if the nums is sorted in decending order then just sort it in ascending order
        if(idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        //finding an element from back which is greater than nums[idx]
        
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        reverse(nums.begin()+idx+1,nums.end());
        
    }
};