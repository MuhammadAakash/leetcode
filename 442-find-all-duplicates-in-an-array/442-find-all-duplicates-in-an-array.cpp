class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> m;
        for(auto x:nums) {
            m[x]++;
        }
        
        vector<int> v;
        for(auto x:m) {
            if(x.second == 2) {
                v.push_back(x.first);
            }
        }
        return v;
    }
};