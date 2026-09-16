class Solution {
public:
    vector<vector<int>> ans;

    void helper(int i, vector<int>& nums, vector<int>& curr) {
        ans.push_back(curr);

        for (int j = i; j < nums.size(); j++) {
            if (j > i && nums[j] == nums[j - 1])
                continue;

            curr.push_back(nums[j]);
            helper(j + 1, nums, curr);
            curr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> curr;
        helper(0, nums, curr);

        return ans;
    }
};