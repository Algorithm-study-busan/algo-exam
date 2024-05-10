class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo = 0;
        int hi = matrix.size() - 1;
        int mid;
        if (hi == 0) {
            return binSearch(matrix[0], target);
        }

        while (lo < hi) {
            mid = (lo + hi)/ 2;
            if (matrix[mid][0] > target) hi = mid - 1;
            else if (matrix[mid][0] < target) lo = mid + 1;
            else return true;
        }
        mid = (lo + hi)/ 2;
        if (mid != 0 && matrix[mid][0] > target) mid = mid - 1;
        return binSearch(matrix[mid], target);
    }

    bool binSearch(vector<int>& arr, int target) {
        int lo = 0;
        int hi = arr.size() - 1;
        int mid;
        while (lo < hi) {
            mid = (lo + hi)/ 2;
            if (arr[mid] > target) hi = mid - 1;
            else if (arr[mid] < target) lo = mid + 1;
            else return true;
        }
        mid = (lo + hi)/ 2;
        if (arr[mid] == target) return true;
        return false;
    }
};