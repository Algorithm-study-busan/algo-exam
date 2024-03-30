#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 무조건 다음께 커야 사는거 아님?
    
    int n; cin >> n;
    vector<int> prices(n);
    for (int i=0; i<n; ++i)
        cin >> prices[i];

    int res = 0;
    for (int i=0; i<prices.size() - 1; ++i)
    {
        if (prices[i + 1] > prices[i])
        res += prices[i+1] - prices[i];
    }
    cout << res;
}