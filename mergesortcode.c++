#include<bits/stdc++.h>
using namespace std;
void merge(int *a,int s,int e){
    int mid=(s+e)/2;
    //ab mereko 2 array bnane hai
    //pahle array ka length
    int len1=mid-s+1;
//dusre arrray ka length
    int len2=e-mid;
//pahle array bna rahe
    int *first=new int[len1];
    //dusra array bna arhe
    int *second=new int[len2];

    //copy value
    int mainArrayindex=s;
    for(int i=0;i<len1;i++){
        first[i]= a[mainArrayindex++];

    }
     mainArrayindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i] = a[mainArrayindex++];
    }

//ab merge 2 sorted arrays
int index1=0;
int index2=0;
mainArrayindex=s;
while(index1<len1 and index2<len2){
    if(first[index1]<second[index2]){
        a[mainArrayindex++]=first[index1++];
    }
    else{
        a[mainArrayindex++]=second[index2++];
    }}
    while(index1<len1){
a[mainArrayindex++]=first[index1++];
    }
    while(index2<len2){
        a[mainArrayindex++]=second[index2++];
    }
    delete []first;
    delete []second;
}



void mergesort(int *a,int s,int e){
    // base case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    //left part sort krna hai
    mergesort(a,s,mid);
    // right part sort krna hai
    mergesort(a,mid+1,e);

    //ab dono part sort ho gye to dono ko merge krne ke liye ek function likhna padega
merge(a,s,e);


}
int main(){
    int a[5]={2,5,1,6,9};
    int n=5;

    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    }
 //space complexity=o(n)
 //time complexity=o(nlog n)