#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        cout << ((s[s.length() - 1] == '1') ? "WIN\n" : "LOSE\n");
    }

    return 0;
}