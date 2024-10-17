#include<bits/stdc++.h>
using namespace std;

int main(){

    double n1,n2;
    cin>>n1>>n2;
    if(n1>0 && n2>0){
        cout<<"Q1";
    }
    if(n1<0 && n2>0){
        cout<<"Q2";
    }
    if(n1<0 && n2<0){
        cout<<"Q3";

    }
    if(n1>0 && n2<0){
        cout<<"Q4";

    }
    return 0;
}