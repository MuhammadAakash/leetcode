class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> map;
        int res = 0;
        for(int i:nums) {
            res += map[i]++;
        }
        return res;
    }
};