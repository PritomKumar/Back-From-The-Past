#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, a, b;
        cin >> n >> a >> b;

        for (int i = 0; ;)
        {
            for (char ch = 'a'; ch < 'a' + b; ch++)
            {
                cout << ch;
                i++;
                if(i==n) break;
            }
            if(i==n) break;
        }
        cout << endl;
    }
    return 0;
}