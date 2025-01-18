#include<iostream>
using namespace std;
//multiple recursion call
// TC 2^n exponential tc


int fabo(int n){
    if(n<=1){
        return  n;
    }
    // // int first = fabo(n-1);
    // // int second = fabo(n-2);
    // // return first + second;

   
    return fabo(n-1) + fabo(n-2);

}

int main (){
    int  n; cin>>n;
    cout<<fabo(n);

}