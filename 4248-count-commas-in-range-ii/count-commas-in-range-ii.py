class Solution:
    def countCommas(self, n: int) -> int:
        cnt,commas,strt=0,1,1000
        while strt<=n:
            end=strt*1000-1
            if end>n:
                end=n
            cnt+=(end-strt+1)*commas
            strt=strt*1000
            commas+=1
        return cnt