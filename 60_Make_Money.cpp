#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c, i, sum = 0, ans = 0;
        cin >> a >> b >> c;

        int arr[a];
        for (i = 0; i < a; i++)
            cin >> arr[i];

        for (i = 0; i < a; i++)
        {
            if (b - arr[i] > c)
            {
                sum += b;
                ans += c;
            }
            else
                sum += arr[i];
        }
        cout << sum - ans << endl;
    }
    return 0;
}