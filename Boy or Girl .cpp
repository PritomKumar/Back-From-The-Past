#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;

    map<char, int> allCharacters;

    for (int i = 0; i < s.length(); i++)
    {
        allCharacters[s[i]]++;
    }

    (allCharacters.size()%2 == 0)?  cout << "CHAT WITH HER!" <<endl :
    cout << "IGNORE HIM!" <<endl ;

    return 0;
}