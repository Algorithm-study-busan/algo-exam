#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sSize = s.size();
        int cur = 0;

        if (s == "") return true;

        for (char c : t) {
            if (c == s[cur]) {
                cur++;
            }
            if (cur == sSize) return true;
        }
        return false;
    }
};