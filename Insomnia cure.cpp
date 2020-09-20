#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int counter=0;
    for (int i = 1; i <= e; i++)
    {
       if(i%a == 0 || i%b == 0 || i%c == 0 || i%d == 0){
           counter++;
       } 
    }

    cout << counter <<endl;
    
    return 0;
}