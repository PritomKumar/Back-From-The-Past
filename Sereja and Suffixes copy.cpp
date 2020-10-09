#include <bits/stdc++.h>
using namespace std;
int n, m, l, a[100001];
set<int> s;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = n; i >= 1; i--)
    {
        cout << "insert a[i] " << a[i] <<endl;
        s.insert(a[i]);
        a[i] = s.size();
        cout << "a[i] " << a[i] <<endl;
    }
    while (m--)
    {
        cin >> l;
        cout << a[l] << "\n";
    }
    return 0;
}