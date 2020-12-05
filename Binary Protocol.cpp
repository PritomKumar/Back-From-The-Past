#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;
    string s = "", a;
    cin >> n >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '1')
            x++; 
        else
        {
            cout << x;
            x = 0;
            if (a[i + 1] == '0')
            {
                cout << 0;
                i++;
            }
        }
    }
    cout << x;
}
