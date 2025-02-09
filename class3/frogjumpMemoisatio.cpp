//Memoisation method  making a dp array to prevent overlapping subproblem. 
// TOP-DOWN METHOD



#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

int frogJump(int n, int arr[] , vector<int>&dp)
{

    
    if (n == 0)
    {
        return 0;
    }

    if (dp[n]!= -1 ) 
        return  dp[n];
    
   
    int left = frogJump(n - 1, arr , dp) + abs(arr[n] - arr[n - 1]);

    int right = INT_MAX;


    if (n > 1)
        right = frogJump(n - 2, arr , dp) + abs(arr[n] - arr[n - 2]);


  
    return dp[n] =  min(left, right);
    
        
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    //INITIALISING THE DP VECTOR
    vector<int> dp(n , -1);

    loop
    {
        cin >> arr[i];
    }

   



    int ans = frogJump(n-1, arr , dp);

    cout << ans;
}
