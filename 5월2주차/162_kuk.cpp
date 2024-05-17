#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int mid;

        while (start < end)
        {
            mid = (start + end) / 2;

            if (nums[mid - 1] < nums[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }

        return start;
    }
};

int main()
{
    Solution* sol = new Solution();
}