#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << ((a >= 2 * b) ? "YES\n" : "NO\n");
    }

    return 0;
}