#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    while (n++)
    {

        string s = to_string(n);
        //cout << s << endl;
        map<char,int> unique ;
        for (int i = 0; i < s.length(); i++)
        {
            unique[s[i]]++;
        }
        if(unique.size() == s.length()){
            cout << n <<endl;
            break;
        } 
        
    }
    return 0;
}