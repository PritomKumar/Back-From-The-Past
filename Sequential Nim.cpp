#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        bool first = true;
        bool unBreak = false;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>1){
                first ? cout << "First" <<endl: cout << "Second" <<endl;
                unBreak = true;
                break;
            }
            else{
                first = !first;
            }
        }
        if(!unBreak){
            !first ? cout << "First" <<endl: cout << "Second" <<endl;
        }
        
    }
    return 0;
}