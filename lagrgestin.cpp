#include<bits/stdc++.h>
using namespace std;
int main(){
    //brute force
    // int arr[7];
    // for(int i=0;i<10;i++){
    //     cin>>arr[i];
    // }
    // sort(arr,arr+7);

    // cout<<arr[6]<<endl;
    //optimal
    int arr[7];
    for(int i=0;i<7;i++) {cin>>arr[i];}
    int largest=arr[0];
    for(int i=1;i<7;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
        else{
            goto end;
        }
end:;
    }
    cout<<largest;
}