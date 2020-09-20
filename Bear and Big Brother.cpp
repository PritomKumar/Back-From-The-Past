#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a=1,b=1;
    cin >> a >>b;
    for (int i = 0; ; i++)
    {
        
        if(a>b){
            cout << i<< endl;
            break;
        }
        a*=3;
        b*=2;
            
    }
    
    return 0;
}