#include <iostream> 
#include <bitset> 
using namespace std;  

int main() {     
   char character;     
   int i;     
   int s[8];          
   cout<<"enter a character: ";     
   cin>>character;       
   for(i=0;i<8;i++) {     
       s[i]=character%2;     
       character=character/2;  
   }     
   int a,b;     
   for(b=0,a=7;b<8;b++,a--) { 
       cout<<s[a]; 
   }  
   return 0; 
}