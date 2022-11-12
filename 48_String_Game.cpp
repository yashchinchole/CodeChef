#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, j = 0;
        string s;
        cin >> n >> s;
        map<char, int> ans;

        if (n & 1)
            cout << "NO" << endl;

        else
        {
            for (i = 0; i < n; i++)
                ans[s[i]]++;
            for (auto i : ans)
            {
                if (i.second % 2)
                {
                    j = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
            if (!j)
                cout << "YES" << endl;
        }
    }

    return 0;
}