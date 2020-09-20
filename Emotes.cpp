#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n, k, m;
    cin >> n >> k >> m;

    long long int emotes[n];
    for (int i = 0; i < n; i++)
    {
        cin >> emotes[i];
    }

    sort(emotes, emotes + n, greater<int>());
    long long int firstHeightest = emotes[0];
    long long int secondHeightest = emotes[1];

    long long int base = firstHeightest * m + secondHeightest;
    long long int mod = m + 1;

    cout << base * (k / mod) + firstHeightest * (k % mod) << endl;

    return 0;
}