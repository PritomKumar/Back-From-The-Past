#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int nearlyLucky = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '7' || s[i] == '4')
        {
            nearlyLucky++;
        }
    }

    if ((nearlyLucky == 4 || nearlyLucky == 7) && nearlyLucky>0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}