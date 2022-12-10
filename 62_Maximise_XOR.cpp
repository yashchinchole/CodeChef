#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2, s = "";
        cin >> s1 >> s2;
        int i, a = 0, b = 0, sum = 0;

        for (i = 0; i < s1.size(); i++)
        {
            if (s1[i] == '0')
                a++;
            else
                b++;
            if (s2[i] == '0')
                a++;
            else
                b++;
        }

        sum = min(a, b);
        for (i = 0; i < sum; i++)
            s += "1";
        for (i = sum; i < s1.size(); i++)
            s += "0";
        cout << s << endl;
    }

    return 0;
}