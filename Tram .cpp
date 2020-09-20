#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin >>n;
    int a,b,answer=0,num=0;
    int temp;
    cin >> temp;
    for (int j = 0; j < n-1; j++)
    {
        cin >> a>>b;
        num+=a;
        if(answer<num){
            answer = num;
        }
        num-=b;

    }
    cin >> temp;
    cout << answer <<endl;
    
    return 0;
}