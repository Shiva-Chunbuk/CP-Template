#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=(start+end)/2;
while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    // go to right wala part
    if(key>mid){
        // jb left wale part me jana hia to start =mid-1
        // right me to mid+1=start 
start=mid+1;
    }
    //left wale me jana hai tb
    // if(key<mid) or we can use 
    else{
        end=mid-1;
    }
    mid=(start+end)/2;
}
return -1;
}


int main(){
int even[6]={2,4,6,8,12,20};
int odd[5]={3,8,11,14,16};

int size;
int evenindex=binarysearch(even,6,12);
int oddindex=binarysearch(odd,5,11);
cout<<"index of 11 is "<<oddindex<<endl;
cout<<"index of 12 is "<<evenindex;


    return 0;
}