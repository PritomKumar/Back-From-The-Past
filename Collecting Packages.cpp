#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x;
    int y;
    static bool comparex(const Point a, const Point b)
    {
        return a.x < b.x;
    }
    static bool comparey(const Point a, const Point b)
    {
        return a.y < b.y;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        // bool grid[1010][1010];
        // for (int i = 0; i < 1010; i++)
        // {
        //     for (int j = 0; j < 1010; j++)
        //     {
        //         grid[i][j] = false;
        //     }
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     int x, y;
        //     cin >> x >> y;
        //     grid[x][y] = true;
        // }

        // int prex = 0, prey = 0;
        // bool check = true;
        // string answer = "";
        // for (int i = 0; i < 1010; i++)
        // {
        //     for (int j = 0; j < 1010; j++)
        //     {
        //         if (grid[i][j])
        //         {
        //             if (prex < i || prey < j)
        //             {
        //                 check = false;
        //                 break;
        //             }
        //             else
        //             {
        //                 for (int k = 0; k < i - prex; k++)
        //                 {
        //                     answer += "R";
        //                 }

        //                 for (int k = 0; k < j - prey; k++)
        //                 {
        //                     answer += "U";
        //                 }
        //                 prex = i;
        //                 prey = j;
        //                 check = true;
        //             }
        //         }
        //     }
        // }

        // if (check)
        // {
        //     cout << "YES" << endl;
        //     cout << answer << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }

        struct Point grid[n];
        struct Point grid2[n];

         
      
   

        for (int i = 0; i < n; i++)
        {
            cin >> grid[i].x >> grid[i].y;
            grid2[i].x = grid[i].x;
            grid2[i].y = grid[i].y;
        }

        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-i-1; j++) {
                 if (grid[j].x > grid[j+1].x)  {
                     struct Point temp = grid[j];
                     grid[j] = grid[j+1];
                     grid[j+1] = temp;
                 }
            }
       
        }  

        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-i-1; j++) {
                 if (grid[j].y > grid[j+1].y)  {
                     struct Point temp = grid[j];
                     grid[j] = grid[j+1];
                     grid[j+1] = temp;
                 }
            }
       
        } 
        
        //sort(grid, grid + n, Point::comparex);
       // sort(grid, grid + n, Point::comparey);

        //sort(grid2, grid2 + n, Point::comparey);
        //sort(grid2, grid2 + n, Point::comparex);

        string answer = "";
        bool check = true;
        Point initialPoint;
        initialPoint.x = 0;
        initialPoint.y = 0;
        for (int i = 0; i < n; i++)
        {
            int l = grid[i].x - initialPoint.x;
            int r = grid[i].y - initialPoint.y;
            if (l >= 0 && r >= 0)
            {

                for (int j = 0; j < grid[i].x - initialPoint.x; j++)
                {
                    answer += "R";
                }

                for (int j = 0; j < grid[i].y - initialPoint.y; j++)
                {
                    answer += "U";
                }
                initialPoint.x = grid[i].x;
                initialPoint.y = grid[i].y;
            }
            else
            {
                check = false;
                break;
            }
        }

        // if (!check)
        // {
        //     check = true;
        //     answer = "";
        //     initialPoint.x = 0;
        //     initialPoint.y = 0;
        //     for (int i = 0; i < n; i++)
        //     {
        //         int l = grid2[i].x - initialPoint.x;
        //         int r = grid2[i].y - initialPoint.y;
        //         if (l >= 0 && r >= 0)
        //         {
        //             for (int j = 0; j < grid2[i].x - initialPoint.x; j++)
        //             {
        //                 answer += "R";
        //             }

        //             for (int j = 0; j < grid2[i].y - initialPoint.y; j++)
        //             {
        //                 answer += "U";
        //             }
        //             initialPoint.x = grid2[i].x;
        //             initialPoint.y = grid2[i].y;
        //         }
        //         else
        //         {
        //             check = false;
        //             break;
        //         }
        //     }
        // }
        if (check)
        {
            cout << "YES" << endl;
            cout << answer << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}