#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    // cout << s << t;
    int maxi = 0, position = 0;
    for (int i = 0; i < m - n + 1; i++)
    {
        int counter = 0;
        for (int j = 0; j < n; j++)
        {
            //cout << t[i+j] << " " << s[j] <<endl;
            if (t[i + j] == s[j])
            {
                //cout << t[i+j] << " " << s[j] <<endl;
                counter++;
            }
        }

        if (maxi < counter)
        {
            maxi = counter;
            position = i;
        }
    }

    //cout << position <<endl;

    vector<int> checker;

    for (int i = position,j=0; i < position + n; i++,j++)
    {
        if (t[i] != s[j])
        {
            checker.push_back(j+1);
        }
    }

    cout << checker.size()<<endl;

    for (int i = 0; i < checker.size(); i++)
    {
        cout << checker[i] << " ";
    }
    
    return 0;
}