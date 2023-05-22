class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) freq[num]++;
        vector<pair<int, int>> pairs(freq.begin(), freq.end());
        sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) { return a.second > b.second; });
        vector<int> result(k);
        transform(pairs.begin(), pairs.begin() + k, result.begin(), [](auto& p) { return p.first; });
        return result;
    }
};