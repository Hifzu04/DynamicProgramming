#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

int f(int days, vector<vector<int>> &points, int prev)
{

    // base case
    if (days == 0)
    {
        int maxi = 0;
        for (int i = 0; i < 3; i++)
        {
            if (prev != i)
            {
                maxi = max(maxi, points[days][i]);
            }
        }
        return maxi;
    }

     int maxi = 0 ; 
    for(int i = 0  ; i< 3 ; i++){
        int ans =0; 
        if(prev != i){
          ans = points[days][i]+f(days-1 ,points, i);
        }
        maxi = max(ans,maxi); 
    }
    return maxi;
}

void solve()
{
    int days;
    cin >> days;

    //vector<vector<int>> points;
    vector<vector<int>> points(days, vector<int>(3));

    for (int i = 0; i < days; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> points[i][j];
        }
    }

    int myans = f(days - 1, points, 3);
    cout<<myans<<"\n";
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