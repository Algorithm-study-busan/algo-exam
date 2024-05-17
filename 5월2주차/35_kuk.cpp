#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    Solution();

    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid;

        while (start <= end)
        {
            mid = (start + end) / 2;

            // Success to find target
            if (target == nums[mid])
                return mid;

            if (target < nums[mid])
            {
                end = mid - 1;
            }
            else if (target > nums[mid])
            {
                start = mid + 1;
            }
        }

        // Fail to find target, Insert
        return start;
    }
};

int main()
{
    Solution* sol = new Solution();
}