class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i=1; i<prices.size(); i++){
            int price = prices[i];
            minPrice = min(minPrice,price);
            maxProfit = max(maxProfit,price-minPrice);
        }
        return maxProfit;
    }
};
