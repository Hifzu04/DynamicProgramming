#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;


//Using recursion
int maxSum(int n, int arr[])
{

    if (n == 0)
        return arr[0];
    if (n < 0)
        return 0;
     

    int takeJump = maxSum(n - 2, arr) + arr[n];
    int nottake = maxSum(n - 1, arr) + 0;
    return max(takeJump, nottake);
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    loop
    {
        cin >> arr[i];
    }

    cout << maxSum(n - 1, arr);
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