#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;
    if (r >= 1 && r <= 50)
        cout << 100 << endl;

    else if (r <= 100 && r > 50)
        cout << 50 << endl;

    else
        cout << 0 << endl;

    return 0;
}