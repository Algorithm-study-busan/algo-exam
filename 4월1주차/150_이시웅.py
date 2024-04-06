# class Solution: # 막무가내 구현 버전
#     def evalRPN(self, tokens: List[str]) -> int:
#         operators = ['+','-','*','/']

#         while 1:
#             n = len(tokens)
#             if n == 1: break

#             for i in range(n):
#                 if tokens[i] in operators:
#                     tmp = eval(f'{tokens[i-2]}{tokens[i]}{tokens[i-1]}')
#                     tokens = tokens[:i-2] + [int(tmp)] + tokens[i+1:]
#                     break
#         return int(tokens[0])

class Solution: # 후위 연산 문제를 스택으로 푸는 아이디어는 외워두는게 좋겠다
    def evalRPN(self, tokens: List[str]) -> int:
        operators = ['+','-','/','*']
        stack = []
        for token in tokens:
            if token in operators:
                popb = stack.pop()
                popa = stack.pop()
                stack.append(str(int(eval(popa+token+popb))))
            else:
                stack.append(token)
        return int(stack[0])