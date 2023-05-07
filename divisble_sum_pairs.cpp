#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,count=0;
    cin>> n;
    cin>>k;
     int a[n];
     for (int i=0;i<n;i++){
         cin>>a[i];
     }
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(i<j){
             if((a[i]+a[j])%k==0){
                 count+=1;
             }
         }
     }
   } 
     cout<<count;
     return 0;
}
