#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t = 0;

    while ((cin >> t) && t != 0)
    {
        int n, m;
        cin >> n >> m;
        int x, y;
        while (t--)
        {
            cin >> x >> y;
            x -= n;
            y -= m;

            if (x > 0 && y > 0)
            {
                cout << "NE" << endl;
            }
            else if (x < 0 && y > 0)
            {
                cout << "NO" << endl;
            }
            else if (x > 0 && y < 0)
            {
                cout << "SE" << endl;
            }
            else if (x < 0 && y < 0)
            {
                cout << "SO" << endl;
            }
            else
            {
                cout << "divisa" << endl;
            }
        }
    }
    return 0;
}