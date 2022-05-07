#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    string ans="";
    long long sum=0;
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            string temp="";
            
            temp=temp+ to_string(arr[i])+ to_string(arr[j]);

            long long num = stoll(temp);
            sum=sum+num;



    

        }
    }

    cout<<sum;


}