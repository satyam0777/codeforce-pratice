// I. Palindrome

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int org=n;
    int digit=0;
    while(org){
         digit= digit*10 + org%10;
        org=org/10;
    }
    
    if(digit==n){
        cout<<digit<<endl;
    cout<<"YES";
    }else{
        cout<<digit<<endl<<"NO";
    }
    return 0;
}