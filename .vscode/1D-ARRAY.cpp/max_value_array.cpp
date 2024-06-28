#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"The numbers of the elements: ";
    cin>>n;

    int arr[n];

    cout<<"The elements will be : ";

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    int max=arr[0];

    for(int i=0;i<=n-1;i++){

        if(max<arr[i])  max=arr[i];
    }

    cout<<"The maximum value will be : "<<max<<" "<<endl;

    return 0;
}