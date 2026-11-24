class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        
        unordered_map<int,int>mp;
        for(auto num :nums){
            mp[num]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto m :mp){
            pq.push({m.second,m.first});


        }
        vector<int>ans;
        while(k){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;


        
    }
};