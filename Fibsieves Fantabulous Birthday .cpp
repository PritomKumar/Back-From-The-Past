#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    scanf("%d",&t);
    //cin >> t;
    for (int l = 1; l <= t; l++)
    {
        long long int num, row, col, base = 0, diff = 0,pivot =0;
        scanf("%I64d",&num);
        //cin >> num;
        for (long long int i = 1;; i++)
        {

            long long int temp = i * i;
            if (temp >= num)
            {
                base = i;
                pivot = i - 1;
                diff = temp - num;
                break;
            }
        }

       // cout << base << endl;
        //cout << diff << endl;

        if (base % 2 == 0)
        {

            if (diff >pivot)
            {
                col = base - (diff - pivot);
                row = base;
            }
            else if (diff ==pivot){
                col = base ;
                row = base;
            }
            else
            {
                col = base;
                row = base - (pivot - diff);
            }
        }
        else
        {
            if (diff >pivot)
            {
                row = base - (diff - pivot);
                col = base;
            }
            else if (diff ==pivot){
                row = base ;
                col = base;
            }
            else
            {
                row = base;
                col = base - (pivot - diff);
            }
        }
        //cout << col << " " << row << endl;
        printf("Case %d: ", l);
        printf("%I64d %I64d\n",col,row);
    }
    return 0;
}