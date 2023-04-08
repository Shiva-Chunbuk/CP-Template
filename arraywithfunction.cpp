
#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int size){
    cout<<"printing the array\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
 
    cout<<"\nprinting is done\n";
}

int main(){
int a[10]={0};
printarray(a,10);
// sizearray(a,10);
int z=sizeof(a)/sizeof(int);
cout<<z<<"\n";
int x[15];
fill_n(x,15,5);
printarray(x,15);

}