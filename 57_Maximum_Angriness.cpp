#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, a, ans = 0;
        cin >> n >> k;
        ans = (n * (n - 1)) / 2;
        if (n / 2 > k)
        {
            a = n - (k * 2);
            ans -= (a * (a - 1)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}