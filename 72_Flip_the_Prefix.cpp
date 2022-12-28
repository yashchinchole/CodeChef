#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, k, cor, sum = 0, ans = INT_MAX;
        string str;
        cin >> n >> k >> str;
        int arr[n];
        arr[0] = 0;
        for (i = 1; i < n; i++)
        {
            if (str[i - 1] != str[i])
            {
                sum++;
                arr[i] = sum;
            }
            else
                arr[i] = sum;
        }
        for (i = n - 1; i >= 0; i--)
        {
            if ((i - k + 1) < 0)
                break;

            cor = arr[i] - arr[i - k + 1];
            if (str[i] == '0')
                cor++;

            ans = min(ans, cor);
        }
        cout << ans << endl;
    }

    return 0;
}