#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string magnets[n];

    for (int i = 0; i < n; i++)
    {
        cin >> magnets[i];
    }
    int counter = 1;
    string s = magnets[0];
    for (int i = 0; i < n; i++)
    {
        if (s != magnets[i])
        {
            counter++;
            s = magnets[i];
        }
    }

    cout << counter << endl;
    return 0;
}