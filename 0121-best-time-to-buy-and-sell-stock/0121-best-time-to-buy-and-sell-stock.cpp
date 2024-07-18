class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int buyPrice = INT_MAX;
        int maxProfit = 0;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            // Update the minimum buy price
            if (arr[i] < buyPrice) {
                buyPrice = arr[i];
            }
            // Calculate the profit if sold at the current price and update maxProfit if needed
            int currentProfit = arr[i] - buyPrice;
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
        
        return maxProfit;
    }
};
