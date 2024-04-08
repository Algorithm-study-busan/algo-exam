from typing import List

class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        tokens.reverse()

        tmp_num = []
        while (len(tokens)):
            token = tokens.pop()

            if token in ['+', '-', '*', '/']:
                n1 = int(tmp_num.pop())
                n2 = int(tmp_num.pop())
                if token == '+':
                    tmp_num.append(n2 + n1)
                elif token == '-':
                    tmp_num.append(n2 - n1)
                elif token == '*':
                    tmp_num.append(n2 * n1)
                elif token == '/':
                    tmp_num.append(int(n2 / n1))
            else:
                tmp_num.append(int(token))
        return tmp_num[0]
        