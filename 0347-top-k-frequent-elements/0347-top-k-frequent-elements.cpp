class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n =nums.size();
        unordered_map<int,int>mp;
        for(auto e :nums){
            mp[e]++;
        }
        priority_queue<pair<int,int>>q;
        for(auto m :mp){
            q.push({m.second,m.first});
        }
        vector<int>ans;
        while(k){
            int ele=q.top().second;
            q.pop();
            ans.push_back(ele);
            k--;
        }
        return ans;
    }
};