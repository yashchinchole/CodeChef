#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, i, sum = 0;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];

        sum = count(arr.begin(), arr.end(), k);

        if ((sum == 0) || (arr[n - 1] == k && sum == 1 && n != 1))
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}