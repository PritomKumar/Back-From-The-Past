#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n,h;
    cin>>n>>h;
    int width=0;
    for (int  i = 0; i < n; i++)
    {
        int r=0;
        cin >> r;
        if(r>h)
        {
            width+=2;
        }
        else {
            width++;
        }
    }

    cout << width <<endl;
    
    return 0;
}