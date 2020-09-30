#include <bits/stdc++.h>

using namespace std;

struct dragon
{
    int strength;
    int bonus;
    static bool compareStrength(const dragon &a, const dragon &b)
    {
        return a.strength < b.strength;
    }
    static bool compareStrengthGreaterThan(const dragon &a, const dragon &b)
    {
        return a.bonus > b.bonus;
    }
};

int main()
{
    int str, n;
    cin >> str >> n;

    vector<dragon> dragons;
    for (int i = 0; i < n; i++)
    {
        dragon temp;
        cin >> temp.strength >> temp.bonus;
        dragons.push_back(temp);
    }

    //sort(dragons[0].strength,dragons[n-1].strength,less<int>());
    //sort(begin(dragons), end(dragons), [](const dragon &a, const dragon &b){return a.strength < b.strength});

    sort(dragons.begin(), dragons.end(), dragon::compareStrength);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dragons[i].strength << " " << dragons[i].bonus << endl;
    // }
    vector<dragon> smallFry;
    smallFry.push_back(dragons[0]);
    int j = 0;
    while (smallFry[0].strength < str)
    {
        if (j == n)
        {
            break;
        }
        //cout<< "Small 0 "<<endl;
        //cout << smallFry[0].strength << " " << smallFry[0].bonus << endl;
        str += smallFry[0].bonus;
        //cout<< "Strength  "<< str <<endl;
        for (int i = 0; i < n; i++)
        {
            if (dragons[i].strength == smallFry[0].strength &&
                dragons[i].bonus == smallFry[0].bonus)
            {
                //cout<< "Deleted dragon"<<endl;
                //cout << dragons[i].strength << " " << dragons[i].bonus << endl;
                dragons.erase(dragons.begin() + i);
                break;
            }
        }

        smallFry.clear();

        for (int i = 0; i < n; i++)
        {
            if (dragons[i].strength < str)
            {
                smallFry.push_back(dragons[i]);
            }
        }

        sort(smallFry.begin(), smallFry.end(), dragon::compareStrengthGreaterThan);
        // cout << "Small Fry" << endl;
        // for (int i = 0; i < smallFry.size(); i++)
        // {
        //     cout << smallFry[i].strength << " " << smallFry[i].bonus << endl;
        // }
        j++;
    }

    if (dragons.size() == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}