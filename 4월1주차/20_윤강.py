class Solution:
    def isValid(self, s: str) -> bool:
        temp = []
        for ss in s:
            if ss == '(' or ss == '[' or ss == '{':
                temp.append(ss)
            else:
                if (len(temp) == 0): return False

                if ss == ')':
                    if temp[-1] != '(': return False
                    else: temp.pop()
                elif ss == ']':
                    if temp[-1] != '[': return False
                    else: temp.pop()
                elif ss == '}':
                    if temp[-1] != '{': return False
                    else: temp.pop()
        if len(temp) == 0: return True
        else: return False
        