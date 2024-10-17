#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int year=n/365;
   int months_no =n%365;
   int months=months_no/30;
   int days=months_no%30;
   cout<<year<<" years"<<endl;
   cout<<months<<" months"<<endl;
   cout<<days<<" days"<<endl;









    return 0;
}