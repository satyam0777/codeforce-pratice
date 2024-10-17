#include<bits/stdc++.h>
using namespace std;
int main(){
    double N;
    cin>>N;
    int y= (int)N;
    if(N-y>0){
        cout<<"float "<<y<<" "<<N-y<<endl;
    }else{
        cout<<"int "<<y<<endl;
    }
    return 0;
}