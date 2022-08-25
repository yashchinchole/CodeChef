#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if ((max(x, y) - min(x, y)) % 2 == 0)
            cout << (max(x, y) - min(x, y)) / 2 << endl;
        else
            cout << (max(x, y) - min(x, y)) / 2 + 1 << endl;
    }
    return 0;
}