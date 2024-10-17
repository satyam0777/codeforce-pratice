#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    char a,b;
    cin>>A>>a>>B>>b>>C;
    if(a=='+' && b=='='){
        if(A+B==C){
            cout<<"Yes";
        }else{
            cout<<A+B;
        }
    }
    if(a=='-' && b=='='){
        if(A-B==C){
            cout<<"Yes";
        }else{
            cout<<A-B;
        }
    }
    if(a=='*' && b=='='){
        if(A*B==C){
            cout<<"Yes";
        }else{
            cout<<A*B;
        }
    }
    return 0;
}