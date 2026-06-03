class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long minPrice,maxProfit=0,n;
        n = prices.size();
        minPrice = prices[0];
        for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) minPrice = prices[i];
        else if (prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;
    }
    return maxProfit;
    }
};