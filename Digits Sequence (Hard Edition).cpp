#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll ones = 1, tens = 9;
    while (n > ones * tens) //9 ,9*10*2,9*100*3
    {
        n -= ones * tens;
        ones++;
        tens *= 10;
        cout << "n = " << n << " ones = " << ones << " tens = " << tens << endl;
    }
    tens /= 9;
    cout << "After loop "<<endl;
    cout << "n = " << n << " ones = " << ones << " tens = " << tens << endl;

    ll mod = n % ones;
    cout << "mod =  " << mod<<endl;
    n--;
    ll x = tens + n / ones;
    cout << "calculate x "<<endl;

    cout << "tens = " << tens <<" n = " <<n <<" ones = " << ones << " n / ones = " << n / ones << endl;

    cout << "x =  " << x<<endl;

    if (mod == 0)
    {
        mod = ones;
    }
    string s = to_string(x);
    cout << s[mod - 1] << endl;
}