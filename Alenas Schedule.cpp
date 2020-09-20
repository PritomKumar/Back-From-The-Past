#include <bits/stdc++.h>

using namespace std;

int findFirstPair(int pair[], int n){

    for (int i = 0; i < n; i++)
    {
        if(pair[i] ==1){
            return i;
        }
    }
    return -1;
}

int findLastPair(int pair[], int n){

    for (int i = n-1; i >=0; i--)
    {
        if(pair[i] ==1){
            return i;
        }
    }

    return -1;
}


int main() {

    // int n=1;
    // //cin >> n;
    // int pair[n] = {0};
    // for (int i = 0; i < n; i++){
    //     //cin >> pair[i];
    // }

    int n;
    cin >> n;
    int pair[n];
    for (int i = 0; i < n; i++){
        cin >> pair[i];
    }
    int firstPair = 0;
    int lastPair = 0,answer = 0;

    firstPair = findFirstPair(pair,n);
    lastPair = findLastPair(pair,n);
    if(firstPair !=-1 ){
        for (int i = 0; i < firstPair; i++){
            pair[i] = 9;
        }
        for (int i = n-1; i > lastPair; i--){
            pair[i] = 9;
        }

        for (int i = firstPair; i <= lastPair;  i++){
            int zeroCount=0;
            while(pair[i+zeroCount]==0){
                zeroCount++;
            }
            if(zeroCount>=2){
                for(int j=i; j<=i+zeroCount-1 ; j++){
                    pair[j] = 9;
                }
                i = i+ zeroCount-1;
            }
        }
    }
    else{
        for (int i = 0; i < n; i++){
            pair[i] = 9;
        }
    }

    for (int i = 0; i < n; i++){
        //cout <<  pair[i] << " ";
    }

    //cout << firstPair << " " << lastPair <<endl;
    for (int i = 0 ; i <n ;i++)
    {
       if(pair[i]!=9){
           answer++;
       }
    }
    cout << answer <<endl;
    return 0;
}
