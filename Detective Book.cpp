#include <bits/stdc++.h>

using namespace std;

int main()
{

    //1 2 3 4 5 6 7 8 9
    //1 3 3 6 7 6 8 8 9

    int n;
    cin >>n;
    int novel[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> novel[i];
    }

    int currentPage = 1;
    int days =0;

   
    for (int i = 1; i <= n; i++)
    {
        
        int mystery = novel[currentPage];
        days++;
       // cout << "Outer "  << currentPage <<endl;
        if (mystery > currentPage)
        {
            
            //cout << "Inner " ;
            for (int j = currentPage; j <= mystery; j++)
            {
                if(mystery < novel[j]){
                     mystery = novel[j];
                }
                if(j == mystery){
                    currentPage = mystery;
                }
               
               //cout << j <<" ";
            }
           // cout <<endl;
        }
        
        if(currentPage == n){
            break;
        }
        currentPage++;
    }

    cout << days <<endl;

    return 0;
}