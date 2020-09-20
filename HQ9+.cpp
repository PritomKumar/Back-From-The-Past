#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    cin >>s;

    bool answer = false;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' ){
            answer = true;
            break;
        }
    }

    answer ? cout << "YES" <<endl: cout << "NO" <<endl;
    
    return 0;
}