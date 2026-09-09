class Solution:
    def isSafe(self,row,col,board,n):
        for i in range(n):
            if board[row][i]=='Q':
                return False
        for i in range(n):
            if board[i][col]=='Q':
                return False
        i,j=row,col
        while i>=0 and j>=0:
            if board[i][j]=='Q':
                return False
            i-=1
            j-=1
        i,j=row,col
        while i>=0 and j<n:
            if board[i][j]=='Q':
                return False
            i-=1
            j+=1
        return True
    def solve(self,board,row,n):
        if row==n:
            return 1
        cnt=0
        for j in range(n):
            if self.isSafe(row,j,board,n):
                board[row][j]='Q'
                cnt+=self.solve(board,row+1,n)
                board[row][j]='.'
        return cnt

    def totalNQueens(self, n: int) -> int:
        board=[['.']*n for _ in range(n)]
        return self.solve(board,0,n)
