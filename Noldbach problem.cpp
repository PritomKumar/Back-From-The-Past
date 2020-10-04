#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    // if(n== 1000 && k==0){
    //     cout << "YES" << endl;
    //     return 0;
    // }

    vector<int> primes;

    for (int i = 2; i <= 1000; i++)
    {
        bool notPrime = false;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0 && i != j)
            {
                notPrime = true;
                break;
            }
        }
        if (!notPrime)
        {
            primes.push_back(i);
        }
    }

    // for (int i = 0; i < 20; i++)
    // {
    //     cout << primes[i] << " ";
    // }

    int nonBach = 0;
    for (int i = 0; i < n; i++)
    {
        if (primes[i] > n)
        {
            break;
        }
        for (int j = 0; j <= i; j++)
        {
            if (primes[i] == primes[j] + primes[j + 1] + 1)
            {
                nonBach++;
                //cout << primes[i] << endl;
                break;
            }
        }
    }

    //cout << nonBach << endl;
    nonBach >= k ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}