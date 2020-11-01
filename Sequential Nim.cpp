#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }

        bool first = true;
        bool unBreak = false;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>1){
                first ? printf("First\n") : printf("Second\n");
                unBreak = true;
                break;
            }
            else{
                first = !first;
            }
        }
        if(!unBreak){
            !first ? printf("First\n") : printf("Second\n");
        }
        
    }
    return 0;
}