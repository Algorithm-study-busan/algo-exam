class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.upper()
        processed_string = [c for c in s if c.isalnum()]
        
        if processed_string == "": return True

        l = 0
        r = len(processed_string) - 1

        while l<r:
            if processed_string[l]!=processed_string[r]:
                return False
            l+=1
            r-=1
        return True # return s == s[::-1]