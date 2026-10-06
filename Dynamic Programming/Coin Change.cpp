class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = amount;
        vector<int> dp(n + 1);
        dp[0] = 0;
        if(amount < 1) return dp[0];
        for(int i = 1; i <= n; i++){
            dp[i] = INT_MAX;
            for(auto &coin : coins){
                if(coin <= i && dp[i - coin] != INT_MAX){
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
            }
        }
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};