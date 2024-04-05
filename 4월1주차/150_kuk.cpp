#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    Solution() {}

    int evalRPN(vector<string>& tokens) {
        int ret = 0;

        stack<int> nums;

        for (int i=0; i<tokens.size(); ++i)
        {
            if (tokens[i] == "+")
            {
                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();

                ret = a + b;
                nums.push(ret);
            }
            else if (tokens[i] == "*")
            {
                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();

                ret = a * b;
                nums.push(ret);
            }
            else if (tokens[i] == "-")
            {
                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();

                ret = a - b;
                nums.push(ret);
            }
            else if (tokens[i] == "/")
            {
                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();

                ret = a / b;
                nums.push(ret);
            }
            else
            {
                try 
                {
                    nums.push(stoi(tokens[i]));
                } 
                catch (exception e)
                {
                    cout << "cannot convert string to int";
                }
                
            }
        }

        return ret;
    }
};

int main()
{
    Solution* sol = new Solution();

    vector<string> tokens;
    tokens->push_back("4");
    tokens->push_back("13");
    tokens->push_back("5");
    tokens->push_back("/");
    tokens->push_back("+");
    cout << sol->evalRPN(tokens);
}