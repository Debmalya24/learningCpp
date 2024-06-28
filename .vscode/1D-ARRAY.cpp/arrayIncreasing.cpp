#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(int a[],int n){

    for(int i=0;i<=n-1;i++){

        cout<<a[i]<<" ";
    }cout<<endl;

    return;
}

int main(){

    int n;
    cout<<"Enter the no. of the elements in the array : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    display(arr,n);

    for(int i=0;i<=n-1;i++){
        
        if(i%2 !=0){

            arr[i]=2*arr[i];
        }

        else {

            arr[i]=arr[i]+10;
        }
        
    }

    display(arr,n);


    return 0;
}