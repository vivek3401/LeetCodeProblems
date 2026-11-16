class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=0;i<=n;i++){
            for(int j=1;j<=3;j++){
                if(i-j>=0){
                    dp[i]=min(dp[i],costs[i-1]+j*j+dp[i-j]);
                }
            }
        }
        return dp[n];
    }
};