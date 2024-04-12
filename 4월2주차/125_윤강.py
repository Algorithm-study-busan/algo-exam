class Solution:
    def isPalindrome(self, s: str) -> bool:
        string = ''
        for i in range(len(s)):
            if s[i].isalpha() or s[i].isdigit():
                string += s[i].lower()
        
        start = 0
        end = len(string) - 1
        result = True
        for i in range(len(string) // 2):
            if string[start] != string[end]:
                result = False
                break
            
            start += 1
            end -= 1
        
        return result
        