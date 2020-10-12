#include <bits/stdc++.h>

using namespace std;

struct Laptop{
    int price;
    int quality;
    static bool compare(Laptop a,Laptop b){
        return a.price<b.price;
    }
};

int main() {
    
    int n;
    cin>>n;
    Laptop laptops[n];
    for (int i = 0; i < n; i++)
    {
        cin>>laptops[i].price >> laptops[i].quality;
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout << laptops[i].price << " " << laptops[i].quality <<endl;
    // }
    //cout <<endl;
    sort(laptops , laptops+n,Laptop::compare);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << laptops[i].price << " " << laptops[i].quality <<endl;
    // }
    bool check = false;
    for (int i = 0; i < n-1; i++)
    {
        if(laptops[i].quality>laptops[i+1].quality){
            check = true;
            break;
        }
    }
    
    check ? cout << "Happy Alex"<<endl: cout << "Poor Alex"<<endl;

    return 0;
}