#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << ((x == y || y == z || z == x) ? "NO\n" : "YES\n");
    }

    return 0;
}