class Solution:
## linear Searching version    
    def isSubsequence(self, s: str, t: str) -> bool:
        # s가 t의 부분문자열이냐
        if s =="": return True
        s = list(s)

        for c in t:
            if c == s[0]:
                s.pop(0)
            
            if not s:
                return True
        return False

## two pointer version

# class Solution:
#     def isSubsequence(self, s: str, t: str) -> bool:
#         # s가 t의 부분문자열이냐
#         if s =="": return True
        
#         s_ptr = 0
#         for c in t:
#             if s[s_ptr] == c:
#                 s_ptr += 1
#             if s_ptr == len(s):
#                 return True
#         return False