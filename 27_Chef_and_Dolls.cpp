#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, ans = 0, arr[1000000];
        cin >> n;

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans ^= arr[i];
        }
        cout << ans << endl;
    }

    return 0;
}