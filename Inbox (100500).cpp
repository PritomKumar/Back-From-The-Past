#include <bits/stdc++.h>

using namespace std;

int findFirstOne(int letters[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (letters[i] == 1)
        {
            return i;
        }
    }
    return -1;
}
int findLastOne(int letters[], int n)
{

    for (int i = n - 1; i >= 0; i--)
    {
        if (letters[i] == 1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int letters[n];
    for (int i = 0; i < n; i++)
    {
        cin >> letters[i];
    }

    int first = findFirstOne(letters, n);
    int last = findLastOne(letters, n);
    int counter = 0;
    if (first != -1)
    {
        for (int i = first; i <= last; i++)
        {
            counter++;
            if (letters[i] == 0)
            {

                counter++;
                while (letters[i] == 0)
                {
                    i++;
                }
            }
        }
    }

    cout << counter << endl;
    return 0;
}