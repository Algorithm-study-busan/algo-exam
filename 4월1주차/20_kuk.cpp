#include <iostream>
#include <stack>
using namespace std;


int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);

    stack<int> openStack;

    string s; cin >> s;

    bool result = true;
    for (int i=0; i<s.size(); ++i)
    {
        if (!result) break;

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            openStack.push(s[i]);
        else
        {
            if (openStack.empty())
            {
                result = false;
                break;
            }
            
            char openTop = openStack.top();
            switch (openTop)
            {
            case '(':
                if (s[i] == ')')
                    openStack.pop();
                else
                    result = false;
                break;
            case '{':
                if (s[i] == '}')
                    openStack.pop();
                else
                    result = false;
                break;
            case '[':
                if (s[i] == ']')
                    openStack.pop();
                else
                    result = false;
                break;
            default:
                break;
            }
        }
    }

    if (!openStack.empty()) 
        result = false;

    if (result) cout << "true";
    else cout << "false";
}