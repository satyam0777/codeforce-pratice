// que- G. factorial

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    long long fact=1;
    for(int i=1;i<=x ;i++){
        fact=fact*i;
    
    }
    cout<<fact<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        solve();

    }
    return 0;
}