//entire array ko kisi bhi value se intialize krne ka tarika
#include<bits/stdc++.h>
using namespace std;
int maxc[100000]={0};//but this is not work on other becaue se sirf pahla value hota hia baki to automatic 0 manta hai wo 1 krenge to bhi 1 0th index wla hoga but baki to 0 hi hoga
int arr[1000000];
int main(){
    fill_n(arr,1000000,5);// fill_n command
    cout<<arr[10]<<"\n";
    cout<<maxc[9]<<" ";
}
