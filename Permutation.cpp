#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    map<int, int> unique;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp <= n)
        {
            unique[i, temp]++;
        }
    }

    cout << n - unique.size() << endl;

    return 0;
}