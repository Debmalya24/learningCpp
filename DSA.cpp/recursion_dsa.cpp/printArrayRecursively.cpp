#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void function(int *arr,int idx,int n){

    if(idx==n) return; //base case
    cout<<arr[idx]<<endl;

    function(arr,idx+1,n);


}

int main(){

    int n=5;
    int arr[]={1,2,9,3,6};

    function(arr,0,5);

    return 0;
}