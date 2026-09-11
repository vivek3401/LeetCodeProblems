class Solution:
    def uniquePathsWithObstacles(self, o: List[List[int]]) -> int:
        n,m=len(o),len(o[0])
        dp=[[0]*m for _ in range(n)]
        for i in range(n):
            for j in range(m):
                if o[i][j]==1:
                    dp[i][j]=0
                    continue
                if i==0 and j==0:
                    dp[i][j]=1
                    continue
                up,down=0,0
                if i>0:
                    up=dp[i-1][j]
                if j>0:
                    down=dp[i][j-1]
                dp[i][j]=up+down
        return dp[n-1][m-1]