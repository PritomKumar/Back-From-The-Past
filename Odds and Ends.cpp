#include <bits/stdc++.h>

using namespace std;

bool isOdd(int num){
    if(num%2==1) return true;
    else return false;
}

int main() {
    
    int n;
    cin>>n;
    int odds[n+2];
    odds[0] = 1;
    odds[n+1] = 1;
    for (int i = 1; i <= n; i++)
    {
        cin>>odds[i];
    }
    
    int subsegments =0;
    for (int i = 1; i <= n; i++)
    {
        if(isOdd(odds[i-1]) && isOdd(odds[i]) && isOdd(odds[i+1])){
            odds[i] = -1;
            subsegments++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(odds[i]!=-1){
            
        }
    }
    
    
    //logic
    //
    return 0;
}