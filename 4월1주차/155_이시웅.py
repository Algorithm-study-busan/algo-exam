class MinStack:

    def __init__(self):
        self.stack = []
        self.minval = 2147483648

    def push(self, val: int) -> None:
        self.minval = min(self.minval, val)
        self.stack.append([val, self.minval])
        # getMin 상수시간을 위해 현재의 최소값을 계산해 값에 같이 넣어준다

    def pop(self) -> None:
        self.stack.pop()
        if not self.stack:
            self.minval = 2147483648 
            # 스택이 비워졌다면 그 다음 값이 최소값이 되게 minval을 초기값으로 돌려놔야함
        else:
            self.minval = self.stack[-1][1]

    def top(self) -> int:
        return self.stack[-1][0]

    def getMin(self) -> int:
        return self.stack[-1][1]
