#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"the no. of the elements in the array is : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements : ";

    for(int i=0;i<=n-2;i++){

        cin>>arr[i];
    }

    bool flag=true;

    for(int i=0;i<=n-2;i++){

        if(arr[i]>arr[i+1]){

            flag=false;
        }
    }

    if(flag==true) cout<<"the array is sorted"<<endl;
    else cout<<"the arrry is unsorted"<<endl;

    return 0;
}