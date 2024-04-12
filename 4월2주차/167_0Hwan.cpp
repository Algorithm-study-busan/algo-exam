#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0;
        int index2 = numbers.size() -1;

        while (index1 <= index2) {
            int sum = numbers[index1] + numbers[index2];
            if (target == sum) {
                vector<int> result = {index1+1, index2+1};
                return result;
            } else if (target > sum) {
                index1++;
            } else {
                index2--;
            }
        }

        vector<int> notFound;
        return notFound;
    }
};