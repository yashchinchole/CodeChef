#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n * 0.5 >= m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}