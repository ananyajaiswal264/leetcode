class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n =nums.size();
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]<=nums.size()){
                st.insert(nums[i]);
            }
        }
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()) return i;

        }
        return n+1;
    }
};