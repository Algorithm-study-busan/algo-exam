class MinStack:
    def __init__(self):
        self.arr = []
        
    def push(self, val: int) -> None:
        if len(self.arr) == 0:
            self.arr.append([val, val])
        else:
            minValue = self.arr[-1][1]
            self.arr.append([val, min(val, minValue)])

    def pop(self) -> None:
        self.arr.pop()

    def top(self) -> int:
        return self.arr[-1][0]

    def getMin(self) -> int:
        return self.arr[-1][1]