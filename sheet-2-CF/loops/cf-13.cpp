// M. Lucky Numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int lucky=0;
    for(int i= a;i<=b;i++){

        int n=i;
        bool ch=0;
        while(n!=0){
            int Last =n%10;
            n=n/10;
            if(Last!=4 && Last!=7){
                ch=1;
            }
        }
        if(ch==0){
            cout<<i<<" ";
            lucky++;
            
        }

    }
    if(lucky==0){
        cout<<"-1";
    }
    return 0;
}