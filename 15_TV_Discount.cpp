#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if ((a - c) == (b - d))
            cout << "ANY" << endl;

        else if ((a - c) <= (b - d))
            cout << "FIRST" << endl;

        else
            cout << "SECOND" << endl;
    }

    return 0;
}