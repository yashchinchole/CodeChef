#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, a = 0;
        cin >> n;
        string str;
        cin >> str;

        for (i = 0; i < n; i++)
        {
            if (str[i] == '1')
                a++;
        }

        if (n & 1)
            cout << "YES" << endl;

        else
        {
            if (a & 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}