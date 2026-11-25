class Solution:
    def countNegatives(self, grid: list[list[int]]) -> int:
        sum=0
        for row in grid:
            for num in row:
                if num < 0:
                    sum+=1
        return sum