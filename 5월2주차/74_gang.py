class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        r_start = 0
        r_end = len(matrix) - 1

        while r_start <= r_end:
            r_mid = (r_start + r_end) // 2

            if matrix[r_mid][-1] < target:
                r_start = r_mid + 1
            elif matrix[r_mid][-1] > target:
                r_end = r_mid - 1
            else:
                return True
        if r_start == len(matrix): r_start -= 1
        
        c_start = 0
        c_end = len(matrix[r_start]) - 1

        while c_start <= c_end:
            c_mid = (c_start + c_end) // 2

            if matrix[r_start][c_mid] < target:
                c_start = c_mid + 1
            elif matrix[r_start][c_mid] > target:
                c_end = c_mid - 1
            else:
                return True
        
        return False