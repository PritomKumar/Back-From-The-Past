#include <bits/stdc++.h>

using namespace std;

struct point{
    int people=0;
    int present=0;
};
int main() {
    
    int n;
    cin>>n;
    n++;
    point presents[n];
    for (int  i = 1; i < n; i++)
    {
        presents[i].people = i;
        cin >> presents[i].present;
    }
    //cout<< "output" <<endl;
    for (int  i = 1; i < n; i++)
    {
        int j=1;
        while(true ){
            if(presents[j].present == i){
                cout << j <<" ";
                break;
            }
            j++;
        }
       // cout << presents[i].present << " ";
    }
    
    return 0;
}