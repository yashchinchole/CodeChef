#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, j, sum = 0;
        cin >> n;
        string x, y;
        cin >> x;
        y = x;

        reverse(x.begin(), x.end());

        vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (x[j - 1] != y[i - 1])
                    arr[i][j] = max(arr[i][j - 1], arr[i - 1][j]);

                else
                    arr[i][j] = arr[i - 1][j - 1] + 1;
            }
        }
        sum = arr[n][n] / 2;
        cout << sum << endl;
    }

    return 0;
}