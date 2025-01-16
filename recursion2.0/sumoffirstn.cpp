//two way to code sum of first n natural number


#include<iostream>
using namespace std;


int sum(int n){
    
   if(n==0) return 0;
   return n + sum(n-1);
    //SUM =  F(n-1)+n;

    //recursive tree : let n==3 
   // 3+sum(2) => 2 +sum(1) =>1+sum(0) => base case retrunn 0 => 0+1 => retrun 2+1 => 3+3 
    

}


//OTHER WAY
// void sum(int n , int ans) {
//     if(n==0) {
//         cout<<ans;
//         return ;
//     }
//     sum(n-1 , ans+n);    
// }






int main(){
    int n ; 
    cin>>n;
    int ans =0 ;
  // sum(n ,ans);
  cout<<sum(n);
}