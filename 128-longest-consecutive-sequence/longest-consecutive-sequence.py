class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s=set()
        maxi=0

        for num in nums:
            s.add(num)
        for val in s:
            if val-1 not in s:
                curr=val
                cnt=1
                while curr+1 in s:
                    cnt+=1
                    curr=curr+1
                maxi=max(maxi,cnt)
        
        return maxi
            
        