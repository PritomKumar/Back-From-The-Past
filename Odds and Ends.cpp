#include <bits/stdc++.h>

using namespace std;

bool isOdd(int num)
{
    if (num % 2 == 1)
        return true;
    else
        return false;
}

int main()
{

    int n;
    cin >> n;
    int odds[n + 2];
    odds[0] = 1;
    odds[n + 1] = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> odds[i];
    }

    int subsegments = 0;
    for (int i = 1; i <= n; i++)
    {
        if (isOdd(odds[i - 1]) && isOdd(odds[i]) && isOdd(odds[i + 1]))
        {
            odds[i] = 1111;
            subsegments++;
        }
    }

//     for (int i = 1; i <= n; i++)
//     {
//        cout << odds[i] << " ";
//     }
//    cout << endl;
//    cout << subsegments << endl;

    odds[0] = 1111;
    odds[n + 1] = 1111;

    bool check = false;
    for (int i = 1; i <= n; i++)
    {
        if (odds[i] != 1111)
        {
            // if (!isOdd(odds[i]))
            // {
            //     check = true;
            //     break;
            // }
            int section = 0;
            for (int j = i;; j++)
            {
                if(j>n+1) {break;}

                if (odds[j] == 1111 || j == n+1)
                {
                //    cout  << " Odds j1111 = " << odds[j] << "  j = " << j << endl;
                //    cout  << " Section1111 = " << section << endl;
                    
                //    cout << "Odds j-1 = " << odds[j - 1] << "  odds j-section = " << odds[j-section]<<endl;
                    i = j;
                    if (!isOdd(odds[j - 1]) || !isOdd(odds[j-section]))
                    {
                        check = true;
                        break;
                    }
                    else
                    {
                        for (int k = j-section; k < j; k++)
                        {
                            odds[k] = 1111;
                        }
                        if(isOdd(section)){
                            subsegments++;
                        }
                    }

                    break;
                }
                else
                {
                    // cout  << " Odds j = " << odds[j] << endl;
                    // cout  << " Section = " << section << endl;
                    
                    section++;
                }
            }
            if (check)
                break;
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << odds[i] << " ";
    // }
    // cout << endl;
    // cout << subsegments << endl;
    if (!isOdd(subsegments))
    {
        check = true;
    }
    check ? cout << "NO" << endl : cout << "YES" << endl;

    return 0;
}