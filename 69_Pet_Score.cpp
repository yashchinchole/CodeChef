#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, sum = 1;
        cin >> n;
        int arr[n];
        map<int, int> x;

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            x[arr[i]]++;
        }

        for (auto it : x)
        {
            if (it.second % 2 != 0)
            {
                cout << "NO" << endl;
                sum = 0;
                break;
            }
        }

        if (sum)
            cout << "YES" << endl;
    }

    return 0;
}