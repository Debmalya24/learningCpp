#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. elements of the array : ";
    cin>>n;


    int arr[n];

    cout<<"The elements are : ";

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    int product=1;

    for(int i=0;i<=n-1;i++){

        product*=arr[i];
    }

    cout<<"The product of the array will be : "<<product<<" "<<endl;

    return 0;
}