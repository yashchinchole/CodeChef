#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, j, k, l, a, b, c, d, x, y;
        cin >> n >> i >> j >> k >> l;
        a = min(i, n - i + 1);
        b = min(j, n - j + 1);
        c = min(k, n - k + 1);
        d = min(l, n - l + 1);
        x = min(a, b);
        y = min(c, d);
        cout << min(abs(i - k) + abs(j - l), x + y) << endl;
    }

    return 0;
}