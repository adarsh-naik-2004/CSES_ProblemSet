#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n,sum=0;cin>>n;long long int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    cout<<((n*(n+1))/2)-sum<<endl;
 
}
