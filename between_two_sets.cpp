#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m,count=0;
    cin>>n>>m;
    vector<int> a; vector<int>b;
    for(int k=0;k<n;k++){
        int input;
        cin >> input;
        a.push_back(input);
    }
    for(int i=0;i<m;i++){
        int input;
        cin >> input;
        b.push_back(input);
    }
    sort(a.begin(),a.end());   
    sort(b.begin(),b.end());
    
    int p = a[n-1], q = b[0];

    while(p<= q){
        
        for(int i = 0 ; i < n; i++){
            if(p % a[i])
             goto False;
        }
        for(int i = 0 ; i < m ; i++){
            if(b[i] % p){
                goto False;
            }
        }
        
        count++;
        False : ;
        p++;
    } 
    

        
    cout << count << endl;
    return 0;
 }

