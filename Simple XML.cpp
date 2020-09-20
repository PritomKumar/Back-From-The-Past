#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stack<string> tag;
    int level = -1;
    string lala = "";
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '<' && s[i + 1] != '/')
        {
            level++;
        }

        if (s[i] == '<' && s[i + 1] == '/')
        {
            level--;
        }
        stringstream ss;
        ss << s[i];
        string temp;
        ss >> temp;
        lala += temp;
        // cout << s[i];
        if (s[i] == '>')
        {
            int j = i;
            bool anti = false;
            while (s[j] != '<')
            {
                if (s[j] == '/')
                {
                    anti = true;
                }
                j--;
            }
            if (anti)
            {
                for (int i = 0; i < level+1; i++)
                {
                    cout << "  ";
                }
            }
            else
            {
                for (int i = 0; i < level; i++)
                {
                    cout << "  ";
                }
            }

            cout  << lala << endl;
            lala = "";
        }
    }

    return 0;
}