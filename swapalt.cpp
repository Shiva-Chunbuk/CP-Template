//swap alternative in an array
#include<bits/stdc++.h>
using namespace std;
void swapalt(int arr[],int size){
for(int i=0;i<size-1;i+=2){
swap(arr[i],arr[i+1]);

}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}}
int main(){
    int size;
    cin>>size;
    int num[1000];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    swapalt(num,size);

}