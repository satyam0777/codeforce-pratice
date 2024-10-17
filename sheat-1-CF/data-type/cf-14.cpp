#include<bits/stdc++.h>
using namespace std;

int main(){
    char x;
   cin>>x;

if(x >='A'&& x<='Z'){
   char y =x-'A'+'a';
    cout <<y<<endl;
 } else{
   char y=x -'a' +'A';
   cout<<y<<endl;
}
return 0;
}

    