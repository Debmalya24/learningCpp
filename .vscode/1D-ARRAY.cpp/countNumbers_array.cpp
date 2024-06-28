#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    cout<<"Enter the numbers of the element: ";

    int arr[n];

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }



    int count=0;

    for(int i=0;i<=n-1;i++){

        count++;
    }

    cout<<count<<" ";

    return 0;
}