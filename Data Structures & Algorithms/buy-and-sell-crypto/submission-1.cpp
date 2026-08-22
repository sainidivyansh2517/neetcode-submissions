class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int maxProfit = 0;
        int minSoFar = prices[0];
        int j = 0;
        while(j<n){

            int minSoFar = min(minSoFar, prices[j]);

            maxProfit = max(maxProfit, prices[j]-minSoFar);
            j++;
        }

        return maxProfit;
    }
};
