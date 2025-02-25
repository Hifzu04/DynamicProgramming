#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    loop
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << arr[0] << "\n";
        return;
    }

    vector<int> dp(n, 0);
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);

    for (int i = 2; i < n; i++)
    {

        dp[i] = max(dp[i - 1], arr[i] + dp[i - 2]);
    }
    cout << dp[n - 1] << "\n";

    /*-------------------------------------------------------------------------------------*/

    // space optimisation (NO dp arr)
    int secondprev = arr[0];
    int prev = max(arr[0], arr[1]);
    for (int i = 2; i < n; i++)
    {

        int curr = max(prev, secondprev + arr[i]);
        int temp = prev;
        prev = curr;
        secondprev = temp;
    }
    cout << prev << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
