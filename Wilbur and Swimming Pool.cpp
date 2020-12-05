#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, x, y, a, b, ax = 0, ay = 0;
    cin >> n >> a >> b;
    n--;
    while (n--)
    {
        cin >> x >> y;
        ax = max(abs(a - x), ax);
        ay = max(abs(b - y), ay);
    }
    if (ay * ax > 0)
        cout << ay * ax << endl;
    else
        cout << -1 << endl;
}