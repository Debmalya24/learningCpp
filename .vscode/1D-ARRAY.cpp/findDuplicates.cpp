#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of elements in the array ";
    cin>>n;

    int arr[n];

    cout<<"The numbers of the elements are : ";

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    bool flag=false;

    for(int i=0;i<=n-1;i++){

        for(int j=i+1;j<=n-1;j++){

            if(arr[i]==arr[j])  flag=true;
        }
    }

    if(flag==true) cout<<"There is duplicate in the array "<<endl;

    else cout<<"There is no duplicate in the array"<<endl;

    return 0;
}