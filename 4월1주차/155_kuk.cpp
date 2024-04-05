#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class MinStack {
public:
    stack<int> s;
    MinStack() {
        s = stack<int>();
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        stack<int> ds = s;
        int res = INT32_MAX;
        for (int i=0; i<s.size(); ++i)
        {
            if (ds.empty()) 
                break;
            res = min(res, ds.top());
            ds.pop();
        }
        return res;
    }
};

int main()
{
    MinStack* obj = new MinStack();
    obj->push(10);
    obj->push(3);
    obj->push(7);

    obj->pop();
    int param_3 = obj->top();
    int param_4 = obj->getMin();

    cout << param_3 << ' ' << param_4 << '\n';

    while (!obj->s.empty())
    {
        cout << obj->s.top() << ' ';
        obj->s.pop();
    }
}