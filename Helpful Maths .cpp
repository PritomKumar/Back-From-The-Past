#include <bits/stdc++.h>
#include<string.h>

using namespace std;

int main() {
    
    string s;
    cin >>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='+') s[i] = ' ';
    }

    stringstream ss(s);
    vector<int> numbers;

    int temp=0;
    while(ss>>temp){
        numbers.push_back(temp);
    }
    sort(numbers.begin() , numbers.end());

    for (int i = 0; i < numbers.size()-1; i++)
    {
        cout << numbers[i] << "+";
    }
    cout << numbers[numbers.size()-1] << endl;
    
    return 0;
}