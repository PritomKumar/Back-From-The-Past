#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pass = 0;
    if (arr[k - 1] > 0)
    {
        pass = k-1;
        while (arr[pass + 1] == arr[k - 1])
        {
            pass++;
        }
        pass++;
        cout << pass << endl;
    }
    else{
        for (int i = 0; i < k; i++)
        {
            if(arr[i]>0){
                pass++;
            }
        }
        cout << pass << endl;

        
    }
    

    return 0;
}