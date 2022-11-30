#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, sum = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] & 1)
                sum++;
        }

        if (sum & 1 || sum == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}