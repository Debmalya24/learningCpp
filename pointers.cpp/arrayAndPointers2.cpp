#include<cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void process(int *arr, int n){
    //inside the function we have the same accesss in the main

    for(int i=0;i<n;i++){

        cout<<*(arr+i)<<endl;

    }

    for(int i=0;i<n;i++){

        cout<<arr[i]<<endl;
    }

    *(arr+1)=33;
}

int main(){

    int arr[3]={5,1,2};

    process(arr,3);

    for(int i=0;i<3;i++){

        cout<<arr[i]<<endl;
    }

    return 0;
}