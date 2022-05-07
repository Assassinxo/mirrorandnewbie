#include <bits/stdc++.h>
using namespace std;


int main(){

    string s;
    cin>>s;

    int n= s.length();
    int p=0;
    for(int i=0;i<n;i++){
        if(s[i]=='-')
        p++;

    }
    int k=0;
    int m=0;

    for(int i=0;i<(n-p)/2 ;i++){
       
        if(s[k]=='-' || s[n-1-m]=='-'){
            if(s[k]=='-' && s[n-1-m]!='-'){
                k++;
                
                
            }
            else if(s[n-1-m]=='-' && s[k]!='-'){
                m++;
                
                

            }
            else{
                k++;
                m++;
                
                
            }
            
           
        }

        swap(s[k],s[n-1-m]);
        k++;
        m++;
        
        
    }

    cout<<s;
}
