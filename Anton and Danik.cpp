#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin >>n;
    string s;
    cin >> s;
    int antonWin = 0 , danikWin=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            antonWin++;
        }
        else if (s[i] == 'D')
        {
            danikWin++;
        }
    }

    if(antonWin> danikWin){
        cout << "Anton" <<endl;
    }
    else if(antonWin< danikWin){
        cout << "Danik" <<endl;
    }
    else{
        cout << "Friendship" <<endl;
    }

    return 0;
}