#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;   
    cin>>a>>b>>c>>d;
    while((b && d)!=0){
          a=a*a;
          b--;
          c=c*c;
          d--;
    }
    if(a > c){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}