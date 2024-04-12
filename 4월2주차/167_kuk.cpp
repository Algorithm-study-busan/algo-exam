#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int i = 0;
        int j = numbers.size() - 1;

        int sum = 0;
        while (i < j)
        {
            sum = numbers[i] + numbers[j];
            if (target > sum)
                ++i;
            else if (target < sum)
                --j;
            else
            {
                res.push_back(i + 1);
                res.push_back(j + 1);
                return res;
            }
        }
        return res;
    }
};

int main()
{
    Solution* sol = new Solution();


}