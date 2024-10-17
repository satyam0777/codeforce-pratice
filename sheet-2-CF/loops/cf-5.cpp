#include<bits/stdc++.h>
using namespace std;

int main (){
int y=-1;
    int n;
    cin>>n;
    for(int i =0 ; i<n;i++){
         int x;
        cin>>x;
        if(y<x){
            y=x;
        }
    }
      cout<<y;
    return 0;
}