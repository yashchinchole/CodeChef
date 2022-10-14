#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int i, sum = 0, n = s.length();

        for (i = 0; i < n; i++)
        {
            if (s[i] == '<' && s[i + 1] == '>')
                sum++;
        }
        cout << sum << endl;
    }

    return 0;
}