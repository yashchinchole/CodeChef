#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, i, ans = 1;
        cin >> n >> k;

        ll arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans = (ans * arr[i]) % k;
        }

        cout << ((ans == 0) ? "YES\n" : "NO\n");
    }

    return 0;
}