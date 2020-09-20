#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, c;
    cin >> n >> c;

    int prevBarrel = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        int barrel;
        cin >> barrel;

        int diff = prevBarrel - barrel - c;

        if (maxi < diff)
        {
            maxi = diff;
        }
        prevBarrel = barrel;
    }

    maxi > 0 ? cout << maxi << endl : cout << 0 << endl;

    return 0;
}