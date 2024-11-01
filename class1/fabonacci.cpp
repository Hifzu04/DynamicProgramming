#include<bits/stdc++.h>
using namespace std;

//lecture notes : https://takeuforward.org/data-structure/dynamic-programming-introduction/

// dp memoisation 
//for following code T.C : O(N)  & S.C. : 0(N)+0(N)

// // int fabonacci(int n, int arr[] ){

// //     if(n<=1){
// //         return n;
// //     }
// //      if(arr[n] != -1 ) return arr[n];
// //      return arr[n] =  fabonacci(n-1, arr) + fabonacci(n-2 ,arr);
// // }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n+1];
//     memset(arr, -1 , sizeof arr);
//     cout<<fabonacci(n , arr);
    
    
// }


//using vector 
// vector<int>vec(n , -1);
// int fabonacci(int n , vector<int>&vec);





//2ND METHOD : TABULATION
//NO additional array is required
//tc : O(N) & s.c O(N);


int main (){
    int n ;
    cin>>n;
     int prev2 = 0;
     int prev =1; 
    for(int i = 2 ; i<=n ; i++){
        int curri= prev2 + prev;
        prev2 = prev;
         prev = curri;
    }
    cout<<prev;

}