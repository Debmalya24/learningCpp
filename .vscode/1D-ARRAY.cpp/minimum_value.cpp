#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of the elements in the array : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    int min=INT16_MAX;

    for(int i=0;i<=n-1;i++){

        if(min>arr[i])  min=arr[i];
    }

    cout<<"The minimum number will be : "<<min<<" "<<endl;

    return 0;
}