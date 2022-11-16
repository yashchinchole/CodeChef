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
        int arr[2 * n];
        for (i = 0; i < 2 * n; i++)
            cin >> arr[i];

        for (i = 0; i < 2 * n; i++)
        {
            sum = 0;
            for (j = i; j < 2 * n; j++)
            {
                if (arr[i] == arr[j])
                    sum++;
            }
            ans = (ans > sum) ? ans : sum;
        }
        if (ans > 2)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}