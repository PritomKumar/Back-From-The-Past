#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    string handle;
    int  plusi, minusi, ai, bi, ci, di, ei;

    
    string roomLeader ; 
    int maxi = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> handle >> plusi >>minusi>> ai >>bi>> ci>> di >>ei;
        int score = ai+bi+ci+di+ei+ 100*plusi - 50*minusi;
        if(score > maxi){
            maxi = score;
            roomLeader = handle;
        }
    }
    cout << roomLeader << endl;
    
    return 0;
}