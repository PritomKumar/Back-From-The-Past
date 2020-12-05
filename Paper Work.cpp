#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;

    int papers[n];
    int negativeCount = 0;
    int counter=0;
    vector<int> result;
    int position =0;
    for (int i = 0; i < n; i++)
    {
        int paper;
        cin >> papers[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        if(papers[i]<0){
            negativeCount++;
        }
        counter++;
        if(negativeCount==2 && papers[i+1]<0){
            result.push_back(counter);
            position +=counter;
            negativeCount = 0;
            counter = 0;
        }
    }
    
    cout << result.size()+1<<endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << n-position <<endl; 
    
    return 0;
}