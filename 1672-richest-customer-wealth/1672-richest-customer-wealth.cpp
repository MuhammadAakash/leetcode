class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum = 0; 
        int temp = 0;
        for(int i = 0; i < accounts.size(); i++) {
            temp = 0;
            temp = accumulate(accounts[i].begin(), accounts[i].end(), temp);
            maximum = max(maximum, temp);
        }
        return maximum;
    }
};