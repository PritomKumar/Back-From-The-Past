#include <bits/stdc++.h>

using namespace std;

struct dragon
{
    int strength;
    int bonus;
};

int main()
{
    int str, n;
    cin >> str >> n;

    dragon dragons[n];
    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i].strength >> dragons[i].bonus;
    }


    
    return 0;
}