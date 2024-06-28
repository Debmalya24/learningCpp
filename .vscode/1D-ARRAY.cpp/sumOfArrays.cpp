#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array will be : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    int sum=0;

    for(int i=0;i<=n-1;i++){

        sum+=arr[i];
    }

    cout<<"The sum of the array will be : "<<sum<<endl;

    return 0;
}