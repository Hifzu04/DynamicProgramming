
// notes link : https://takeuforward.org/data-structure/dynamic-programming-climbing-stairs/

#include <bits/stdc++.h>
using namespace std;


//RECURSIVE WAY(WITHOUT DP)  

// // int climbing(int n)
// // {
// //   if (n == 1)
// //     return 1;
// //   if (n == 2)
// //   {
// //     return 2;
// //   }

// //   return climbing(n - 1) + climbing(n - 2);
// // }
// // int main()
// // {
// //   int n;
// //   cin >> n;
// //   cout << climbing(n);
// // }



///WITH MEMOISATION  tc--> O(N) , sc--> O(N)+O(N)

// int climbing(int n, vector<int>&dp){
//   if(n==1) return 1;
//   if(n==0) return 1;
  
//   if(dp[n] != -1 ) return dp[n];

//   return dp[n] =  climbing(n-1, dp)+climbing(n-2, dp);

// }
// int main (){
//     int n ; cin>>n;
//     vector<int>dp(n+1,-1);
    
//     cout<<climbing(n,dp);
// }




//Tabulation (no additional array is reqt , reduced space complexity by O(N);

int climbing(int n){
    int prev2nd = 1;
    int prev = 2;
    int ans;
    for(int i = 3 ; i<=n; i++){
        ans = prev + prev2nd;
        prev2nd=prev;
        prev= ans;

    }
    return ans;
}

int main(){
    int n ; cin>>n;
    cout<<climbing(n);
}


