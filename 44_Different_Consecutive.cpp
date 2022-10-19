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
        string s;
        int n, i, sum = 0;
        cin >> n >> s;

        for (i = 0; i < n; i++)
        {
            if ((s[i] == '0') && (s[i + 1] == '0'))
                sum++;
            if ((s[i] == '1') && (s[i + 1] == '1'))
                sum++;
        }
        cout << sum << endl;
    }

    return 0;
}