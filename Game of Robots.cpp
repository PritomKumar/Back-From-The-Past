#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n, k;
    cin >> n>>k;
    long long int robots[n];
    for (int i = 0; i < n; i++)
    {
        cin >> robots[i];
    }

    long long int base = (sqrt(1 + 8 * k) - 1) / 2;
    long long int border = (base * (base + 1)) / 2;
    long long int result = k - border - 1;
    if (result < 0)
        result = base - 1;
    //cout << (sqrt(1 + 8 * k) - 1) / 2 << " " << (base * (base + 1)) / 2<< " " <<result << endl;
    cout << robots[result] << endl;

    return 0;
}