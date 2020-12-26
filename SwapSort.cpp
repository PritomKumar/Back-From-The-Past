#include <bits/stdc++.h>

using namespace std;

bool sameArray(int arr[], int arr2[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

int findIndex(int arr[], int n, int number, int arr2[], int number2)
{

    int x, y;
    for (int j = 0; j < n; j++)
    {
        
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == number)
            {
                x=i;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr2[i] == number2)
            {
                y=i;
            }
        }
        if(x==y){
            return x;
        }
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;
    int num[n];
    int num2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        num2[i] = num[i];
    }

    sort(num, num + n);
    vector<int> result;

    int sortCount = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (num[i] != num2[i])
            {
                int index = findIndex(num2, n, num[i], num, num2[i]);
                int temp = num2[i];
                num2[i] = num2[index];
                num2[index] = temp;
                sortCount++;
                result.push_back(i);
                result.push_back(index);
            }
            if (sameArray(num, num2, n))
            {
                break;
            }
        }
        if (sameArray(num, num2, n))
        {
            break;
        }
    }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if (num[j] > num[j + 1])
    //         {
    //             int temp = num[j];
    //             num[j] = num[j + 1];
    //             num[j + 1] = temp;
    //         }
    //         sortCount++;
    //         result.push_back(j);
    //         result.push_back(j+1);
    //     }
    // }

    cout << sortCount << endl;

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
        if ((i + 1) % 2 == 0)
        {
            cout << endl;
        }
    }

    //5 2 5 1 4
    //1 2 4 5 5

    return 0;
}