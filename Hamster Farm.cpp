#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long long int n,k;
    cin>>n>>k;

    vector<long long int> boxes;
    for (int i = 0; i < k; i++)
    {
        long long int temp;
        cin>>temp;
        if(temp<=n){
            boxes.push_back(temp);
        }   
    }

    
    
    return 0;
}