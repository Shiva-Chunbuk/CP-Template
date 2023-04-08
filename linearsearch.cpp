//example 1 is present or not

#include<bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[],int size,int key){
for(int i=0;i<size;i++){
    if(arr[i]==key)return true;
   
}
return false;



}
int main(){
int size;
cin>>size;

int num[1000];
for(int i=0;i<size;i++){
    cin>>num[i];
}
int key;
cin>>key;
cout<<linearsearch(num,size,key)<<"\n";
}
