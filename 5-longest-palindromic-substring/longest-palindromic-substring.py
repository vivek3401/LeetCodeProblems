class Solution:
    def solve(self,s,left,right,n):
        while left>=0 and right<n and s[left]==s[right]:
            left-=1
            right+=1
        return s[left+1:right]
    def longestPalindrome(self, s: str) -> str:
        ans=""
        for i in range(len(s)):
            odd=self.solve(s,i,i,len(s))
            even=self.solve(s,i,i+1,len(s))
            if len(odd)>len(ans):
                ans=odd
            if len(even)>len(ans):
                ans=even
        return ans
        