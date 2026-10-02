class Solution:
    def solve(self,ans,temp,n,open,close):
        if len(temp)==2*n:
            ans.append(''.join(temp))
            return
        if open<n:
            temp.append('(')
            self.solve(ans,temp,n,open+1,close)
            temp.pop()
        if close<open:
            temp.append(')')
            self.solve(ans,temp,n,open,close+1)
            temp.pop()

            
    def generateParenthesis(self, n: int) -> list[str]:
        ans=[]
        temp=[]
        self.solve(ans,temp,n,0,0)
        return ans