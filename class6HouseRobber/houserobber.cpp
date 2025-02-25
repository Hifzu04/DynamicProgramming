#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Using memoization
int maxSum(int n, vector<int>& arr, vector<int>& dp) {
    if (n == 0) return arr[0];
    if (n < 0) return 0;

    if (dp[n] != -1) return dp[n];

    int takeJump = maxSum(n - 2, arr, dp) + arr[n];
    int notTake = maxSum(n - 1, arr, dp);

    dp[n] = max(takeJump, notTake);
    return dp[n];
}

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Creating temp arrays
    vector<int> temp1, temp2;
    for (int i = 0; i < n; i++) {
        if (i != 0) temp1.push_back(arr[i]);
        if (i != n - 1) temp2.push_back(arr[i]);
    }

    int size1 = temp1.size(), size2 = temp2.size();

    // Separate dp arrays for both calls
    vector<int> dp1(size1, -1);
    vector<int> dp2(size2, -1);

    int a = (size1 > 0) ? maxSum(size1 - 1, temp1, dp1) : 0;
    int b = (size2 > 0) ? maxSum(size2 - 1, temp2, dp2) : 0;

    cout << max(a, b);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
