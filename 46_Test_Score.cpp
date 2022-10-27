
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (c % b == 0 && c % b <= a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}