#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int size){
    int start=0;int end =size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    //printing array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   

}
int main(){
int size;
cin>>size;
int num[1000];
for(int i=0;i<size;i++){
    cin>>num[i];
}
reversearray(num,size);

}