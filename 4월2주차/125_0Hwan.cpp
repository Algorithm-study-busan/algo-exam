#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        string target = "";

        for (char c : s) {
            if (c >= 'A' && c <= 'Z') {
                target.push_back(c+('a' - 'A'));
            } else if (c >= 'a' && c <= 'z') {
                target.push_back(c);
            } else if (c >= '0' && c <= '9') {
                target.push_back(c);
            }
        }

        int size = target.size();
        for (int i = 0; i < size/2; i++) {
            if (target[i] != target[size - (i+1)]) {
                //cout << "\"" << temp << "\" is not a palindrome";
                return false;
            }
        }
        return true;
    }
};