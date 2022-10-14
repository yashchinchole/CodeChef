#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, sum = 0, ans = 0;
        string s;
        cin >> n >> s;

        for (i = 0; i < n; i++)
        {
            if (s[i] == 'H')
                sum++;
            if (s[i] == 'T')
                sum--;
            if (sum < 0 || sum > 1)
                break;
        }

        if (sum == 0)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
    }

    return 0;
}