#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long long int k,n,w,money;
    cin >> k>>n>>w;

    money = k*((w*(w+1))/2);
    money>n ? cout << money-n <<endl : cout << 0 <<endl;
    
    return 0;
}