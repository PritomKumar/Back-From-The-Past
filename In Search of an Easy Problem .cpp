#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int problems[n];
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        cin>> problems[i];
        if(problems[i]==1){
            check = true;
        }
    }

    check ? cout << "HARD" : cout <<"EASY" ;
      
    cout << endl;
    
    return 0;
}