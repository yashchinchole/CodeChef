#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, j, sum = 0, ans = 0;
        cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];

        for (i = 0; i < n; i++)
        {
            if (a[i] != 0 && b[i] != 0)
                sum++;

            else
            {
                ans = max(ans, sum);
                sum = 0;
            }
        }
        ans = max(ans, sum);
        cout << ans << endl;
    }

    return 0;
}