class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int c{0};
        vector<int> ans;
        unordered_map<int, int> mp;
        vector<pair<int, int>> p;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto& [num, freq] : mp) {
            p.push_back({freq, num});
        }
 
        sort(p.begin(), p.end());

        for (int i = p.size() - 1; i >= 0 && ans.size() < k; i--) {
            ans.push_back(p[i].second);
        }

        return ans;
    }
};
