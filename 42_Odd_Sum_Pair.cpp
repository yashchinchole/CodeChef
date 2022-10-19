#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        if ((a + b) & 1 || (c + b) & 1 || (a + c) & 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}