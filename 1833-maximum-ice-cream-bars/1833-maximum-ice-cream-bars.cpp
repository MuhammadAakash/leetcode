class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        
        int n = costs.size();
        int icebar = 0;
        
        while(icebar < n && costs[icebar] <= coins) {
            coins -= costs[icebar];
            icebar++;
        }
        return icebar;
    }
};