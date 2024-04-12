#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() > t.size()) return false;

        int si = 0;
        for (int ti=0; ti<t.size(); ++ti)
        {
            if (si >= s.size())
                break;
            if (s[si] == t[ti])
                si += 1;
        }

        if (si == s.size())
            return true;
        return false;
    }
};

int main()
{
    Solution* sol = new Solution();

    string s;
    string t;
    cin >> s >> t;

    if (sol->isSubsequence(s, t))
        cout << "true";
    else
        cout << "false";
}