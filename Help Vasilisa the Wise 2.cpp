#include <bits/stdc++.h>

using namespace std;

bool findAnswer(int r1c1,int r1c2,int r2c1,int r2c2){
   
}
int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    int r1c1, r1c2, r2c1, r2c2;
    bool found = false;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            for (int k = 1; k <= 9; k++)
            {
                for (int l = 1; l <= 9; l++)
                {
                    if (i == j || i == k || i == l || j == k || j == l || k == l)
                    {
                        continue;
                    }
                    else{
                        r1c1 = i;
                        r1c2 = j;
                        r2c1 = k;
                        r2c2 = l;
                        if((r1c1 + r1c2 == r1) && (r2c1 + r2c2 == r2) 
                        && (r1c1 + r2c1 == c1) && (r1c2 + r2c2 == c2) 
                        && (r1c1 + r2c2 == d1) && (r1c2 + r2c1 == d2)){
                            found = true;
                            break;
                        }
                    }
                }
                if(found) break;
            }
            if(found) break;
        }
        if(found) break;
    }

    if(found){
        cout << r1c1 << " " << r1c2 <<endl;
        cout << r2c1 << " " << r2c2 <<endl;
    }
    else{
        cout << -1 <<endl;
    }
    return 0;
}