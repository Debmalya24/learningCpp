#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(int a[]){
    for(int i=0;i<=4;i++){

        cout<<a[i]<<" ";
    }cout<<endl;

}

void change(int b[]){

    b[1]=100;

}


int main(){

    int arr[6]={1,2,3,4,5,6};

    display(arr);
    change(arr);
    display(arr);

}