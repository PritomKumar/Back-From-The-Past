#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    if(n==1 || k==1){
        cout << 0 <<endl;
        return 0;
    }
    if (n >= k)
    {
        if (k % 2 == 0)
        {
            long long int result = k / 2 - 1;
            result <= 0 ? result = 0 : result = result;
            cout << result << endl;
        }
        else
        {
            long long int result = k / 2;
            result <= 0 ? result = 0 : result = result;
            cout << result << endl;
        }
    }
    else
    {
        if (k % 2 == 0)
        {
            long long int result = (k / 2 - 1) - (k - 1 - n);
            result <= 0 ? result = 0 : result = result;
            cout << result << endl;
        }
        else
        {
            long long int result = (k / 2) - (k - 1 - n);
            result <= 0 ? result = 0 : result = result;
            cout << result << endl;
        }
    }
    return 0;
}