#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        int i, n = str.length();
        int l, u, d, s;
        l = u = d = s = 0;

        if (n < 10)
            cout << "NO" << endl;

        else
        {
            for (i = 1; i < n - 1; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    l++;

                else if (str[i] >= 'A' && str[i] <= 'Z')
                    u++;

                else if (str[i] >= '0' && str[i] <= '9')
                    d++;

                else if (str[i] == '@' || str[i] == '%' || str[i] == '#' || str[i] == '&' || str[i] == '?')
                    s++;
            }

            if ((str[0] >= 'a' && str[0] <= 'z') || (str[n] >= 'a' && str[n] <= 'z'))
                l++;

            if (d == 0 || l == 0 || u == 0 || s == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}