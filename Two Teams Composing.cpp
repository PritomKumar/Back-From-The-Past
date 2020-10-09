#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        map<int, int> team;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            team[temp]++;
            //cout << team[temp] <<endl;
        }
        int required = n / 2;
        int teamA = team.size()-1;
        int teamB = 0;

        for (auto it = team.begin(); it != team.end(); ++it)
        {
            if (teamB < it->second)
            {
                teamB = it->second;
            }
        }
       
        if (teamB>teamA+1)
        {
            cout << teamA+1 << endl;
        }
        else
        {
            cout << min(teamA, teamB) << endl;
        }
    }

    return 0;
}