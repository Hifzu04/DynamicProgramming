#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    loop{
        cin>>arr[i];
    }
    vector<int> dp(n, INT_MAX);
     int jumpCost ;
    dp[0] = 0;

    for(int i = 1; i<n ; i++){
        for(int j = 1 ; j<=k  && j<=i; j++){
             jumpCost=   dp[i-j] +  abs(arr[i]-arr[i-j]);
            dp[i] = min(dp[i] , jumpCost);
        
        }
    }
    cout<<dp[n-1];

  
}
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1; 
    while(t--){    
    solve();

}
    return 0;
}