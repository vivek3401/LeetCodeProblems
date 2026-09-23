from collections import deque

class Solution:
    def maxSlidingWindow(self, nums: list[int], k: int) -> list[int]:
        dq=deque()
        ans=[]
        for i in range(k):
            while dq and nums[dq[-1]]<=nums[i]:
                dq.pop()
            dq.append(i)
        for i in range(k,len(nums)):
            ans.append(nums[dq[0]])
            while dq and dq[0]<=i-k:
                dq.popleft()
            while dq and nums[dq[-1]]<=nums[i]:
                dq.pop()
            dq.append(i)
        ans.append(nums[dq[0]])
        return ans