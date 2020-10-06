#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);

    if(arr[0]==1){
        cout << 1 <<endl;
        return 0;
    }
    // int point = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[0]==arr[i]){
    //         point++;
    //     }
    //     else{
    //         break;
    //     }
    // }
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%arr[0]!=0){
            check = false;
            break;
        }
    }

    check ? cout << arr[0] << endl: cout << -1 << endl;
    
    

    return 0;
}