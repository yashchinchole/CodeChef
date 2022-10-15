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

        int l = 0, r = s.length() - 1, modulo = 1e7 + 9;
        long long ans = 1;
        bool flag = true;

        while (l <= r)
        {
            if (s[l] == '?' && s[r] == '?')
                ans *= 26;

            else if (s[l] != '?' && s[r] != '?' && s[l] != s[r])
            {
                flag = false;
                break;
            }

            ans %= modulo;
            l++, r--;
        }

        cout << (flag ? ans : 0) << endl;
    }

    return 0;
}