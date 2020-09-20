#include <bits/stdc++.h>

using namespace std;

int main()
{

    string word;
    cin >> word;
    int upper = 0, lower = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
            upper++;
        else if (word[i] >= 'a' && word[i] <= 'z')
            lower++;
    }
    if (upper > lower)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
                word[i] -= 32;
        }
    }
    else
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
                word[i] += 32;
        }
    }
    cout << word <<endl;

    return 0;
}