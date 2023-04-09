#include<bits/stdc++.h>
using namespace std;
int findunique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=(ans^arr[i]);
    }
   return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int num[1000];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<findunique(num,n)<<"\n";

}}
