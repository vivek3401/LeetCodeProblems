class Solution:
    def deckRevealedIncreasing(self, deck: List[int]) -> List[int]:
        n=len(deck)
        deck.sort()
        q=deque()
        for i in range(n):
            q.append(i)
        i=0
        nums=[0]*n
        if len(q)==0:
            return []
        while len(q)>0:
            idx=q.popleft()
            nums[idx]=deck[i]
            i+=1
            if len(q)>0:
                q.append(q.popleft())
        return nums
