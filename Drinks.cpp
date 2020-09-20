#include <bits/stdc++.h>

using namespace std;

int main()
{

    double n;
    cin >> n;
    double sum = 0.0;
    double resullt = 0.0;
    for (int i = 0; i < n; i++)
    {
        double temp;
        cin >> temp;
        sum += temp;
    }
    double num = sum/n ;
    cout << setprecision(12) << num <<endl;

    return 0;
}