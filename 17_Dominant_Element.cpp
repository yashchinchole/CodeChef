#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, j, k, l, sum, a[1000], arr[1000];
        cin >> n;

        l = n;
        for (i = 0; i < n; i++)
            cin >> arr[i];

        for (i = 0; i < n; i++)
        {
            sum = 0;
            for (j = 0; j < n; j++)
            {
                if (arr[j] == arr[i])
                    sum++;
            }

            for (k = i + 1; k < n; k++)
            {
                if (arr[i] == arr[k])
                {
                    l--;
                    continue;
                }
                else
                    a[i] = sum;
            }
            // cout << "sum = " << sum << endl;
        }

        // cout << "l = " << l << endl;

        sort(a, a + l, greater<>());

        // for (i = 0; i < l; i++)
        //     cout << a[i] << endl;

        if (a[0] == a[1])
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}