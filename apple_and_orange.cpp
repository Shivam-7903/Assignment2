#include <bits/stdc++.h>

using namespace std;

int main(){
 long long s,t,a,b,m,n;
 cin>>s>>t;
 cin>>a>>b;
 cin>>m>>n;
 long long count=0,count1=0;
 
 long long apple[m],orange[n];
 
  for(int  i=0;i<m;i++){
      cin>>apple[i];
  }
  for(int  i=0;i<n;i++){
      cin>>orange[i];
  }
  for(int i=0;i<m;i++){
      if(a+apple[i]>=s&&a+apple[i]<=t){
          count+=1;
      }
  }
  for(int i=0;i<n;i++){
      if(b+orange[i]<=t&& b+orange[i]>=s){
       count1+=1;   
      }
  }
   cout<<count<<"\n"<<count1;
}  
  
