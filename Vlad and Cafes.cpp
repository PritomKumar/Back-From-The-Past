#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int cafes[n];
    int cafesOriginal[n];

    for (int i = 0; i < n; i++)
    {
        cin >> cafes[i];
        cafesOriginal[i] = cafes[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << cafes[i] << " ";
    // }

    int lastIndex = 9999999;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (cafes[i] != -1 || cafes[j] != -1)
            {
                if (cafes[i] == cafes[j])
                {
                    cout << "Equivalend"  << " last Index " << lastIndex <<" j " << j <<endl;
                    if (lastIndex > j)
                    {
                        lastIndex = j;
                        cout << "mini" << " last Index " << lastIndex<<endl;
                    }
                    cafes[j] = -1;
                }
            }
        }
    }

    cout << cafesOriginal[lastIndex] << endl;

    return 0;
}