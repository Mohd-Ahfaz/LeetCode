 int maxprofit = 0;
        int cost = prices[0];
        for (int i=1; i<prices.size(); i++){
            int profit= prices[i]-cost;
            maxprofit = max(maxprofit,profit);
            cost = min(cost,prices[i]);
        }
        return maxprofit;