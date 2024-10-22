// Q. Digits
#include<bits/stdc++.h>
using namespace std;
void solve(){
             long long x;
             cin>>x;
             if(x==0){
                cout<<"0";
               
             }
    while(x!=0){
            cout<<x%10<<" ";
            x/=10;
    }
        cout<<endl;
        
    }
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();    
}
    return 0;
}