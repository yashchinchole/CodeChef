#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int i, a, b, c;
        cin >> a >> b;
        c = a + b;

        for (i = 2; i < c; i++)
        {
            if (c % i == 0)
            {
                cout << "Bob" << endl;
                break;
            }
        }

        if (i == c)
            cout << "Alice" << endl;
    }

    return 0;
}