#include <bits/stdc++.h>

using namespace std;

int main() {
    

    map <int,int> myMap;


    int n = 4;
    int num[4] = {2,4,2,4};

    for (int i = 0; i < n; i++)
    {
       // myMap.insert(make_pair(num[i],i));
        myMap[num[i]]++;
    }

    for(auto it = myMap.cbegin(); it != myMap.cend(); ++it)
    {

        cout << it->first << " " ;
    }
    return 0;
}