#include <bits/stdc++.h>
using namespace std;

// recursion
/*
int frogMemo(int n, int k, int arr[])
{
    if (n == 0)
        return 0;
    int minmJmp = INT_MAX;
    for (int i = 1; i <= k &&  i <= n; i++)
    {
        int jump = frogMemo(n - i, k, arr) + abs(arr[n] - arr[n - i]);
        minmJmp = min(minmJmp, jump);
    }

     return minmJmp;
}
*/

// memoisation
int frogMemo(int n ,int k,  int arr[], vector<int>&dp)
{
    if(n==0) return 0;

    if(dp[n] != -1) return dp[n];

    int minmjump = INT_MAX;

    for(int i =1  ; i<=k && i<=n; i++){
        int jump = frogMemo(n-i , k, arr , dp) +  abs(arr[n]-arr[n-i]);
         minmjump = min(minmjump, jump);
    }

    return dp[n] = minmjump;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    vector<int> dp(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << frogMemo(n - 1, k, arr, dp);
}
