class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        
        int min_cost = prices[0] + prices[1];
        
        if(min_cost <= money) return money - min_cost;
        
        return money;
        
    }
};