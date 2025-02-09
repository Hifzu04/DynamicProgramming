
// BOTTOM UP APPROACH
//tc same as memoisation method 
//sc can be optimised

#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    loop
    {
        cin >> arr[i];
    }

    vector<int> dp(n - 1, -1);
    // bottom up start from zero.
    dp[0] = 0;

    for (int i = 1; i < n; i++)
    {
        int first = dp[i - 1] + abs(arr[i - 1] - arr[i]);
        int second = INT_MAX;
        if (i > 1)
            second = dp[i - 2] + abs(arr[i] - arr[i - 2]);



        dp[i] = min(first, second);    
    }

    cout<<dp[n-1];
}
