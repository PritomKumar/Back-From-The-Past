#include <bits/stdc++.h>

using namespace std;

bool checkMismatch(int arr[],int arrCopy[],int n){

    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=arrCopy[i]){
            return true;
        }
    }
    
    return false;
}

int main() {
    
    int n;
    cin >>n;

    int m=n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = n-i;
    }
    int arrCopy[n];
    copy(arr, arr+n, arrCopy);
    sort(arrCopy, arrCopy+n);
    for(int i=0; i<n ; i++){
        //cout << arrCopy[i] <<  " ";
    }

    for(int i=0; i<n-1 ; i++){
        for(int j=i ; j<n-1 ;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;  
            }
        }
    }

    
    if(checkMismatch(arr,arrCopy,n)){

        for (int i = n-1; i >= 0; i--)
        {
            cout << arrCopy[i] << " ";
        }
    }
    else{
        cout << -1 ;
    }
    cout << endl;
    return 0;
}