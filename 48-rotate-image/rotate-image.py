class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n=len(matrix)
        m=len(matrix[0])
        nums=[[0]*m for _ in range(n)]
        for i in range(n):
            for j in range(m):
                nums[j][n-i-1]=matrix[i][j]
        
        matrix[:]=nums