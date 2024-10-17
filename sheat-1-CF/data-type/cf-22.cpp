#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B;
    char s;
    cin>>A>>s>>B;
    if(s=='<'){
        if(A<B){
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
    }
    if(s=='>'){
        if(A>B){
            cout<<"Right";

        }else{
            cout<<"Wrong";
        }
    }
    if(s=='='){
        if(A==B){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    return 0;

}