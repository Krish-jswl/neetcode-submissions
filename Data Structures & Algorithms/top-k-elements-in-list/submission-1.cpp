class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<vector<int>> arr(nums.size() + 1);
        for (int x : nums) {
            mp[x]++;
        }

        for (auto& [key, freq] : mp) {
            arr[freq].push_back(key);
        }

        vector<int> ans;

        for (int i = arr.size() - 1; i > 0; i--) {
            for (int x : arr[i]) ans.push_back(x);
            if (ans.size() == k) break;
        }

        return ans;
    }
};
