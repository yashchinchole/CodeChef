#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        float n, x, y, a, b;
        cin >> n >> x >> y >> a >> b;
        if ((n / a * x) > (n / b * y))
            cout << "DIESEL" << endl;
        else if ((n / a * x) < (n / b * y))
            cout << "PETROL" << endl;
        else
            cout << "ANY" << endl;
    }
    return 0;
}