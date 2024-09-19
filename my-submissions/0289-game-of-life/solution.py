class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        m,n = len(board),len(board[0])
        board1 = [[0]*n for _ in range(m)]

        direction = [
            (-1, -1), (-1, 0), (-1, 1),
            (0, -1),         (0, 1),
            (1, -1), (1, 0), (1, 1)
        ]

        for i in range(m):
            for j in range(n):
                live = 0
                for x in direction:
                    r,c = i+x[0],j+x[1]
                    if(0<=r<m and 0<=c<n and board[r][c] == 1):
                        live+=1
                
                # O song 
                if board[i][j] == 1:
                    if live in [2,3]:
                        board1[i][j] = 1
                    else:
                        board1[i][j] = 0
                else:
                    if live == 3:
                        board1[i][j] = 1
                    else:
                        board1[i][j] = 0
        for i in range(m):
            for j in range(n):
                board[i][j] = board1[i][j]
                
