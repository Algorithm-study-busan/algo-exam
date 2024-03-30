#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> nums(n);
    for (auto& e : nums)
        cin >> e;

    // 결국 내가 갈 수 있는거 j
    // 점프한 곳 기준으로
    // 추가 점프 + 남은 점프를 계산해서 제일 높은거로 가는게 안맞나
    int result = 0;
    for (int i=0; i<nums.size() - 1;)
    {
        int expected = -1; // 가중치
        int jumpCount = 1; // 점프 수

        for (int j = 1; j <= nums[i]; ++j)
        {
            // 마지막 원소 이상으로 갔으면 그만
            if (i + j >= nums.size() - 1)
            {
                jumpCount = j;
                break;
            }

            // 같은 가중치면 더 많이 간걸 택해야지
            if (expected <= j + nums[i + j])
            {
                jumpCount = j;
                expected = j + nums[i + j];
            }
        }

        i += jumpCount;
        result += 1;
    }
    cout << result;
}