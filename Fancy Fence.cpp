#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    while(n--){
        double angle;
        cin>>angle;
        double side = 360 / (180-angle) ;
        if(side == (int)side){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}