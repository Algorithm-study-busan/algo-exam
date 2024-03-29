class Solution {
public:
    int jump(vector<int>& nums) {
        int total_count = 0;
        for (int i = 0; i < nums.size()-1;) {
            int jump_point = nums[i];
            int max_point = 0;
            int max_index = 0;
            if (i+jump_point >= nums.size()-1) {
                total_count++;
                break;
            }
            for (int j=1;j <= jump_point; j++) {
                if (nums[i+j] == 0) continue;
                if (nums[i+j]+j > max_point) {
                    max_point = nums[i+j] + j;
                    max_index = j;
                }
            }
            i += max_index;
            total_count++;
        }
        return total_count;
    }
};