#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i=0; i<row; ++i)
        {
            if (target < matrix[i][0]) return false;
            if (target > matrix[i][col - 1]) continue;

            if (binarySearch(matrix[i], target))
                return true;
        }
        return false;
    }

private:
    bool binarySearch(vector<int>& vec, int target)
    {
        int start = 0;
        int end = vec.size() - 1;
        int mid;

        while (start <= end)
        {
            mid = (start + end) / 2;

            if (target == vec[mid])
                return true;
            else if (target < vec[mid])
                end = mid - 1;
            else 
                start = mid + 1;
        }
        return false;
    }
};

int main()
{
    Solution* sol = new Solution();

    vector<vector<int>> matrix = 
    {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    int target = 3;

    if (sol->searchMatrix(matrix, target))
        cout << "true\n";
    else
        cout << "false\n";
}