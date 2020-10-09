#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int a[n+1];
    int l[n+1], reverse[n];
    map<int, int> uni;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        uni[a[i]]++;
        //reverse[i] = uni.size();
    }

    // int totalUnique = uni.size();
    // for (int i = 1; i <= n; i++)
    // {
    //     l[i] = totalUnique - reverse[i - 1];
    // }

    for (int i = 1; i <= n; i++)
    {
        
        uni[a[i]]--;
        l[i] = uni.size();
       // cout << "uni[a[temp]] " << uni[a[temp]] << endl;
       // cout << uni.size() << endl;

        if (uni[a[i]] == 0)
        {
            uni.erase(a[i]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        cout << l[temp] <<endl;
    }
    

    return 0;
}