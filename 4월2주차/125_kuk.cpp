#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        for (int i=0; i<s.size(); ++i)
        {
            if ('A' <= s[i] && s[i] <= 'Z')
            {
                s1 += (s[i] + 32);
            }   
            else if ('a' <= s[i] && s[i] <= 'z') 
            {
                s1 += s[i];
            }
            else if ('0' <= s[i] && s[i] <= '9')
            {
                s1 += s[i];
            }
        }

        int strLen = s1.size();
        for (int i=0; i<strLen; ++i)
        {
            if (i > strLen - 1 - i) break;

            if (s1[i] != s1[strLen - 1 - i])
                return false;
        }
        
        return true;
    }
};

int main()
{
    string str;
    getline(cin, str);

    Solution* solution = new Solution();

    if (solution->isPalindrome(str))
        cout << "true";
    else
        cout << "false";
}