#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n*2];
        int firstEven=-1,firstOdd=-1;
        for (int i = 0; i < n*2; i++)
        {
            cin>>arr[i];
            
        }
        int counter=0;
        for (int i = 0; i < n*2; i++)
        {
            if(counter >= n*2-2){
                break;
            }
            if(arr[i]%2==0){
                if(firstEven ==-1){
                    firstEven = i;
                }
                else{
                    cout<< firstEven+1 << " " << i+1 <<endl;
                    firstEven = -1;
                    counter+=2;
                } 
            }
            else{
                if(firstOdd ==-1){
                    firstOdd = i;
                }
                else{
                    cout<< firstOdd+1 << " " << i+1 <<endl;
                    firstOdd = -1;
                    counter+=2;
                } 
            }
            
        }
        
        
    }
    return 0;
}