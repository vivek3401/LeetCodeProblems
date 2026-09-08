class Solution:
    def countCommas(self, n: int) -> int:
        if n<=999:
            return 0
        cnt=0
        for i in range(1000,n+1):
            cnt+=1
        return cnt
        