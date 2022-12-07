#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, x, p, q;
        cin >> n >> x;
        p = pow(2, x);
        q = pow(2, n);
        cout << p / q << endl;
    }

    return 0;
}