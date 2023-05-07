#include <bits/stdc++.h>

using namespace std;

int main(){
    int g,count=0,count1=0;
    cin>>g;
    int s[g];
    for(int i=0;i<g;i++){
        cin>>s[i];
    }
   int  max=s[0];
   int min=s[0];
    
    for(int i=0;i<g;i++){
        if(max<s[i]){
        max=s[i]   ; 
        count+=1;}
     
        else if (min>s[i]){
            min=s[i];
            count1+=1;
        }
}
    cout<<count<<" "<<count1;
}
