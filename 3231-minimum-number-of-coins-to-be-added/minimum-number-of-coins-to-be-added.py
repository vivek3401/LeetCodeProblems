class Solution:
    def minimumAddedCoins(self, coins: List[int], target: int) -> int:
        coins=sorted(coins)
        n=len(coins)
        i,miss,added=0,1,0
        while miss<=target:
            if i<n and coins[i]<=miss:
                miss+=coins[i]
                i+=1
            else:
                miss+=miss
                added+=1
        return added
        