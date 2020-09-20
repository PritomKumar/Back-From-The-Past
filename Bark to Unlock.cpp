#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string password ;
    cin >> password;
    int n;
    cin >>n;
    string barks[n];
    bool gameOver = false;
    for (int i = 0; i < n; i++)
    {
        cin >> barks[i];
        if(barks[i]== password){
            gameOver = true;
        }
    }
    if(gameOver) {
        cout << "YES" <<endl;
        return 0;
    }
    bool firstHalf = false , lastHalf = false;

    for (int i = 0; i < n; i++)
    {
        if(password[0]==barks[i][1]){
            firstHalf = true;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(password[1]==barks[i][0]){
            lastHalf = true;
            break;
        }
    }

    (firstHalf && lastHalf) ? cout << "YES" <<endl: cout << "NO" <<endl; 
    
    return 0;
}