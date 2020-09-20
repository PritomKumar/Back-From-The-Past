#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, white, black;
    cin >> n >> white >> black;
    int dancers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> dancers[i];
    }

    int maxi = max(white, black);
    int mini = min(white, black);
    int cost = 0;
    if (n % 2 == 1 && dancers[n / 2] == 2)
    {
        //cout << "fsdjflds" <<endl;
        cost += mini;
    }
    bool check = false;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        if (dancers[i] != 2 && dancers[j] != 2)
        {
            if (dancers[i] != dancers[j])
            {
                //cout << -1 << endl;
                check = true;
                break;
            }
        }
        else
        {
            if (dancers[i] == 2 && dancers[j] == 2)
            {
                cost += mini * 2;
            }
            else if (dancers[i] == 0 && dancers[j] == 2)
            {
                cost += white;
            }
            else if (dancers[i] == 1 && dancers[j] == 2)
            {
                cost += black;
            }
            else if (dancers[i] == 2 && dancers[j] == 0)
            {
                cost += white;
            }
            else if (dancers[i] == 2 && dancers[j] == 1)
            {
                cost += black;
            }
        }
    }

    check ? cout << -1 <<endl : cout << cost <<endl;

    return 0;
}