class Solution:
    def solve(self,ans,temp,digits,mp,i):
        if i==len(digits):
            ans.append("".join(temp))
            return
        letter=mp[int(digits[i])]
        for c in letter:
            temp.append(c)
            self.solve(ans,temp,digits,mp,i+1)
            temp.pop()
        
    def letterCombinations(self, digits: str) -> List[str]:
        ans=[]
        temp=[]
        mp=["","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"]
        self.solve(ans,temp,digits,mp,0)
        return ans
        