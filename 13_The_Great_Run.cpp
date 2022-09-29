#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, i, j, sum, ans = 0;
        cin >> n >> k;
        
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];

        for (i = 0; i <= n - k; i++)
        {
            sum = 0;
            for (j = i; j < i + k; j++)
                sum += arr[j];

            ans = (ans > sum) ? ans : sum;
        }
        cout << ans << endl;
    }

    return 0;
}