//maximum and minimum number in array
#include<bits/stdc++.h>
using namespace std;


int getmx(int arr[],int size){
    int mx=INT_MIN;
    for(int i=0;i<size;i++){
//     if(arr[i]> mx) {
//     mx=arr[i];
// }
mx=max(mx,arr[i]);
}

return mx;
}
int getmn(int arr[],int size){
    int mn=INT_MAX;
    for(int i=0;i<size;i++){
        // if(arr[i]<mn){
        //     mn=arr[i];
        // }
        mn=min(mn,arr[i]);
    }
    return mn;
}
int main(){
int size;
cin>>size;
int num[1000];
for(int i=0;i<size;i++){
    cin>>num[i];
}
cout<<getmx(num,size)<<"\n";
cout<<getmn(num,size)<<"\n";
}
