#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int matrix[n + 2][m + 2];
        for (int i = 0; i < n + 2; i++)
        {
            for (int j = 0; j < m + 2; j++)
            {
                matrix[i][j] = -1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> matrix[i][j];
            }
        }

        for (int i = 0; i < n+2; i++)
        {
            for (int j = 0; j < m+2; j++)
            {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        for (int k = 1;; k++)
        {
            bool check = false;

            int maxi = 0;
            int finalI = 1, finalJ = 1;
            for (int i = 1; i <= n; i++)
            {
                int counter = 0;
                for (int j = 1; j <= m; j++)
                {
                    if (matrix[i][j] != 1 && matrix[i - 1][j] != 1 &&
                        matrix[i][j - 1] != 1 && matrix[i + 1][j] != 1 &&
                        matrix[i][j + 1] != 1)
                    {
                        if (matrix[i - 1][j] != -1)
                        {
                            counter++;
                        }
                        if (matrix[i + 1][j] != -1)
                        {
                            counter++;
                        }
                        if (matrix[i][j - 1] != -1)
                        {
                            counter++;
                        }
                        if (matrix[i][j + 1] != -1)
                        {
                            counter++;
                        }
                        check = true;
                    }
                    if (counter > maxi)
                    {
                        maxi = counter;
                        finalI = i;
                        finalJ = j;
                        cout << "maxi = " << maxi << " counter = " << counter << " finalI = " << finalI << " finalJ = " << finalJ << endl;
                    }
                    if (i == n && j == m)
                    {
                        if (check == false)
                        {
                            break;
                        }
                    }
                }
            }
            cout << endl;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

            //cout << "maxi = " << maxi <<endl;
            if (check == false)
            {
                k % 2 == 1 ? cout << "Vivek" << endl : cout << "Ashish" << endl;
                break;
            }

            if (matrix[finalI][finalJ] == 0)
            {
                matrix[finalI][finalJ] = 1;
            }
            // if (matrix[finalI - 1][finalJ] == 0)
            // {
            //     matrix[finalI - 1][finalJ] = 1;
            // }
            // if (matrix[finalI + 1][finalJ] == 0)
            // {
            //     matrix[finalI + 1][finalJ] = 1;
            // }
            // if (matrix[finalI][finalJ - 1] == 0)
            // {
            //     matrix[finalI][finalJ - 1] = 1;
            // }
            // if (matrix[finalI][finalJ + 1] == 0)
            // {
            //     matrix[finalI][finalJ + 1] = 1;
            // }
        }
    }
    return 0;
}