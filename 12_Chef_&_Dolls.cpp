#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, arr[10000];
        cin >> n;

        for (i = 0; i < n; i++)
            cin >> arr[i];

        int ans = arr[0];
        for (i = 1; i < n; i++)
            ans ^= arr[i];

        cout << ans << endl;
    }

    return 0;
}