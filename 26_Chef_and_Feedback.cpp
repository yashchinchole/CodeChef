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

        if (s.find("010") != std::string::npos || s.find("101") != std::string::npos)
            cout << "GOOD" << endl;

        else
            cout << "BAD" << endl;
    }

    return 0;
}