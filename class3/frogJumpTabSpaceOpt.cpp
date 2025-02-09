// tabulation space optimisation by removing dp arr

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    // int curr = vec[0]  ;
    int prev = 0;
    int prev2 = 0;

    for (int i = 1; i < n; i++)
    {
        int first = prev + abs(vec[i - 1] - vec[i]);
        int second = INT_MAX;
        if (i > 1)
            second = prev2 + abs(vec[i - 2] - vec[i]);

        int curr = (min(first, second));

        prev2 = prev;
        prev = curr;
    }

    cout << prev << "\n";
}
