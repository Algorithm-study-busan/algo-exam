class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (i+1 != prices.size() && prices[i] < prices[i+1]) {
                //buy
                profit -= prices[i++];

                while (i+1 != prices.size() && prices[i] < prices[i+1]) {
                    i++;
                }
                //sell
                profit += prices[i];
            }
        }
        return profit;
    }
};