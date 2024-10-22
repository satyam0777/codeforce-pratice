//  J. Primes from 1 to n

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
     
    for(int i=2 ;i<=n;i++){
        bool check = 0;
        for(int j=2 ;j<i;j++){
            if(i%j==0){
                check=1;
            }
        }
            if(check==0){
                cout<<i<<endl;
               
            }
       
    }
  
    return 0;
}