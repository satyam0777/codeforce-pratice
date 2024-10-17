#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s =n/1000;
    if(s%2==0){
        cout<<"EVEN";
    } else{
        cout<<"ODD";
    }
    return 0;
}