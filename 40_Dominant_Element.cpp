#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, i, j, arr[1000], count[1000] = {0};
        cin >> n;

        for (i = 0; i < n; i++)
            cin >> arr[i];

        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                if (arr[i] == arr[j])
                    count[i]++;
            }
        }

        sort(count, count + n, greater<int>());

        if (count[0] == count[1])
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}