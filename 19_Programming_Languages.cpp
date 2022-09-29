#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, q, w, e, r;
        cin >> a >> b >> q >> w >> e >> r;

        if ((q == a && w == b) || (w == a && q == b))
            cout << 1 << endl;

        else if ((e == a && r == b) || (r == a && e == b))
            cout << 2 << endl;

        else
            cout << 0 << endl;
    }

    return 0;
}