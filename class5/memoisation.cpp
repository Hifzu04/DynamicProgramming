#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;


//Using memoisation
int maxSum(int n, int arr[] , vector<int>&dp)
{

    if (n == 0)
        return arr[0];
    if (n < 0)
        return 0;
    
    if (dp[n]!= 0) return dp[n];

    int takeJump = maxSum(n - 2, arr, dp) + arr[n];
    int nottake = maxSum(n - 1, arr , dp) + 0;
    dp[n] =  max(takeJump, nottake);
    return dp[n];
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
    vector<int>dp(n , 0);

    cout << maxSum(n - 1, arr , dp);
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