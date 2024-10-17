#include<bits/stdc++.h>
using namespace std;
int main(){
    int L1,R1,L2,R2;
    cin>>L1>>R1>>L2>>R2;
    if(L2<=R1){
        cout<<L2<<" "<<R1;
    }else{
        cout<<"-1";
    }
}