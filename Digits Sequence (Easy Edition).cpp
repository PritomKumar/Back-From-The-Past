#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin>>n;

    string tentousand="";
    for (int  i = 1; i <= n; i++)
    {
       tentousand+=to_string(i);
    } 
    
    cout << tentousand <<endl;
    cout << tentousand[n-1] <<endl;
    return 0;
}