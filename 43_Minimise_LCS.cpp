#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, sum = 0;
        string a, b;
        cin >> n >> a >> b;

        map<char, int> x, y;
        for (char i : a)
            x[i]++;

        for (char i : b)
            y[i]++;

        for (char i = 'a'; i <= 'z'; ++i)
            sum = max(sum, min(x[i], y[i]));

        cout << sum << endl;
    }

    return 0;
}