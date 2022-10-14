#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i;
        cin >> n;
        string s;
        cin >> s;

        for (i = 0; i < n; i++)
        {
            if (s[i] == 'Y')
            {
                cout << "NOT INDIAN" << endl;
                break;
            }

            else if (s[i] == 'I')
            {
                cout << "INDIAN" << endl;
                break;
            }

            if (i == n - 1)
                cout << "NOT SURE" << endl;
        }
    }

    return 0;
}