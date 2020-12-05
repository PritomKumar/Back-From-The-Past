#include <iostream>
using namespace std;
int main()
{
    int n, m, i, a, b, t;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        cin >> a >> b;
        if (t >= a && t < b)
        {
            t = b;
        }
    }
    if (t == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}