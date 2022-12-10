#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, k, d, ans;
        cin >> x >> y >> k;
        d = abs(x - y);
        cout << ((d % k) ? (d / k + 1) : (d / k)) << endl;
    }

    return 0;
}