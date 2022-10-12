#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int i, j, n, ans = 0, count, a[100];
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {
            count = 1;
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                    count++;
            }
            ans = (ans > count) ? ans : count;
        }
        cout << n - ans << endl;
    }

    return 0;
}