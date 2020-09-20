#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s,t;
    cin >>s>>t;

    string reverse=s;

    for (int i = s.length()-1; i >=0 ; i--)
    {
        reverse[s.length()-1 - i] = s[i];
    }
    
    (reverse == t) ? cout << "YES" << endl : cout << "NO" << endl;
    
    

    return 0;
}