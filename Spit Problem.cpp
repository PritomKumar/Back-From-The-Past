#include <bits/stdc++.h>

using namespace std;

struct Camel
{
    int p;
    int d;
};

int main()
{

    int n;
    cin >> n;

    Camel camels[n];
    for (int i = 0; i < n; i++)
    {
        cin >> camels[i].p >> camels[i].d;
    }

    bool checker = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((camels[i].p + camels[i].d == camels[j].p) && (camels[i].d == -camels[j].d))
            {
                checker = true;
            }
        }
        if (checker)
            break;
    }

    checker ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}