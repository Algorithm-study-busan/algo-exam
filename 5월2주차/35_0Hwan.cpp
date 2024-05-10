class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        int mid;
        if (hi == 0) {
            if (nums[0] >= target) return 0;
            return 1;
        }
        while (lo < hi) {
            mid = (lo + hi) / 2;
            if (nums[mid] > target) {
                hi = mid - 1;
            }
            else if (nums[mid] < target) {
                lo = mid + 1;
            }
            else return mid;
        }
        //cout << (lo + hi)/2;
        mid = (lo + hi) / 2;
        if (nums[mid] >= target) {
            return mid;
        } else {
            return mid+1;
        }
    }
};