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
        struct Point grid[n];
        struct Point grid2[n];

        for (int i = 0; i < n; i++)
        {
            cin >> grid[i].x >> grid[i].y;
            grid2[i].x = grid[i].x;
            grid2[i].y = grid[i].y;
        }

        sort(grid, grid + n, Point::comparex);
        sort(grid, grid + n, Point::comparey);

        sort(grid2, grid2 + n, Point::comparey);
        sort(grid2, grid2 + n, Point::comparex);

        string answer = "";
        bool check = true;
        Point initialPoint;
        initialPoint.x = 0;
        initialPoint.y = 0;
        for (int i = 0; i < n; i++)
        {
            if (grid[i].x >= initialPoint.x && grid[i].y >= initialPoint.y)
            {
                for (int i = 0; i < grid[i].x - initialPoint.x; i++)
                {
                    answer += "R";
                }

                for (int i = 0; i < grid[i].y - initialPoint.y; i++)
                {
                    answer += "U";
                }
            }
            else
            {
                check = false;
                break;
            }
        }

        if (!check)
        {
            for (int i = 0; i < n; i++)
            {
                if (grid[i].x >= initialPoint.x && grid[i].y >= initialPoint.y)
                {
                    for (int i = 0; i < grid[i].x - initialPoint.x; i++)
                    {
                        answer += "R";
                    }

                    for (int i = 0; i < grid[i].y - initialPoint.y; i++)
                    {
                        answer += "U";
                    }
                }
                else
                {
                    check = false;
                    break;
                }
            }
        }
        if(check){
            cout << "YES"<<endl;
            cout << answer<<endl;
        }
        else{
             cout << "NO"<<endl;
        }
    }
    return 0;
}