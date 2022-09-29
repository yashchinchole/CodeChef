#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n = 1, i = 0;
        cin >> a >> b;
        int s = min(a, b);
        int l = max(a, b);

        while (n <= l)
        {
            n = pow(2, i++);
            if (s * n == l)
            {
                cout << "YES" << endl;
                break;
            }

            if (n > l)
                cout << "NO" << endl;
        }
    }

    return 0;
}