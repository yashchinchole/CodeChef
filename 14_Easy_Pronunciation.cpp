#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, sum = 0;
        cin >> n;

        string s, ans = "YES";
        cin >> s;

        for (i = 0; i < n; i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                sum++;
                if (sum == 4)
                {
                    ans = "NO";
                    break;
                }
            }
            else
                sum = 0;
        }
        cout << ans << endl;
    }

    return 0;
}