class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(s) == 0: return True

        s_idx = 0
        result = False
        for i in range(len(t)):
            if s_idx == len(s): break
            
            if s[s_idx] == t[i]:
                s_idx += 1
        
        if s_idx == len(s):
            result = True
        
        return result

        