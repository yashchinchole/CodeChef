#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4], ans = 4;
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    for (int i = 0; i < 4; i++)
    {
        if (a[i] < 10)
            ans--;
    }

    cout << ans << endl;

    return 0;
}