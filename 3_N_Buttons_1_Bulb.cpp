#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, state = 0;
        cin >> n;

        string s, r;
        cin >> s >> r;

        for (i = 0; i < n; i++)
        {
            if (s[i] != r[i])
                state++;
        }

        if (state % 2 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}