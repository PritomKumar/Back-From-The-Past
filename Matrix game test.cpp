#include <stdio.h>
int t, n, m, r, c, a[100][100];
int main()
{
    for (scanf("%d", &t); t--; r = c = 0)
    {
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                scanf("%d", &a[i][j]);

        for (int i = 0; i < n; i++, r++)
            for (int j = 0; j < m; j++)
                if (a[i][j]==1)
                {
                    r--;
                    break;
                }

        for (int j = 0; c < r && j < m; j++, c++)
            for (int i = 0; i < n; i++)
                if (a[i][j]==1)
                {
                    c--;
                    break;
                }
        if (c & 1)
            puts("Ashish");
        else
            puts("Vivek");
    }
}