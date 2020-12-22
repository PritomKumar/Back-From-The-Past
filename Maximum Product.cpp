#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int numbers[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &numbers[i]);
        }

        int p = 0;
        int maximumNumbers[5];
        while (p < 5)
        {

            int maxi = 0;
            int maxiIndex = 0;
            for (int i = 0; i < n; i++)
            {
                if (maxi <= abs(numbers[i]))
                {
                    maxi = numbers[i];
                    maxiIndex = i;
                }
            }
            maximumNumbers[p] = maxi;
            numbers[maxiIndex] = 0;
            p++;
        }

        for (int i = 0; i < 5; i++)
        {
            cout <<  maximumNumbers[i]<< " ";
        }

        long long int answer = 1;
        for (int i = 0; i < n; i++)
        {
            answer*= maximumNumbers[i];
        }
        
        cout << answer <<endl;


        //sort(numbers, numbers + n);
        // if (n > 10)
        // {
        //     int maximumArray[10];
        //     for (int i = 0, j = n - 1, k=9; i < 5; i++, j--,k--)
        //     {
        //         maximumArray[i] = numbers[i];
        //         maximumArray[k] = numbers[j];
        //     }
        // }
        // else{
        //     int newArray[n];
        //     for (int i = 0; i < n; i++)
        //     {

        //     }

        // }
    }
    return 0;
}