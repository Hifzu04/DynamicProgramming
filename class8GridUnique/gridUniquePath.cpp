#include<bits/stdc++.h>
using namespace std;
int sol(int m, int n, vector<vector<int>> &dp)
{
    if (m == 1 && n == 1)
    {
        return 1;
    }
    if (m == 0 || n == 0)
    {
        return 0;
    }
    if (dp[m][n] != -1)
        return dp[m][n];

    int up = sol(m - 1, n, dp);
    int left = sol(m, n - 1, dp);

    return dp[m][n] = up + left;
}

int main()
{
    
         int m ,n ; cin>>m>>n;
        // memoisation

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return sol(m, n, dp);

}
