class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l = 0
        r = len(numbers) - 1

        while l<r:
            pointerSum = numbers[l] + numbers[r]

            if pointerSum > target: r-=1
            elif pointerSum < target: l+=1
            else:
                return [l+1,r+1]
            
        