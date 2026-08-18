class Solution:
    def solve(self,coins,dp,amount,n):
        if amount==0:
            return 0
        if n==0:
            if amount%coins[0]==0:
                return amount//coins[0]
            else:
                return float('inf')

        if dp[n][amount]!=-1:
            return dp[n][amount]
        nottake=self.solve(coins,dp,amount,n-1)
        take=float('inf')
        if coins[n]<=amount:
            take=1+self.solve(coins,dp,amount-coins[n],n)
        dp[n][amount]=min(take,nottake)
        return dp[n][amount]


    def coinChange(self, coins: List[int], amount: int) -> int:
        n=len(coins)
        dp=[[-1]*(amount+1) for _ in range(n)]
        ans= self.solve(coins,dp,amount,n-1)
        return -1 if ans>=float('inf') else ans
        
        