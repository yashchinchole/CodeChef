#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, ans;
        cin >> n;
        ans = __builtin_popcount(n);
        cout << ans - 1 << endl;
    }

    return 0;
}