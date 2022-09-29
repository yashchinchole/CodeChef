#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i;
        cin >> n;

        for (i = 1; i <= n; i++)
            (i == 1 || i == n) ? cout << 1 : cout << 0;
        cout << endl;
    }

    return 0;
}