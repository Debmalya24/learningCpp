#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the number of rows in the array: ";
    cin>>m;

    int n;
    cout<<"Enter the number of columns in the arry : ";
    cin>>n;

    int arr[m][n];

    //taking the inputs of 2-D array;

    for(int i=0;i<=m-1;i++){

        for(int j=0;j<=n-1;j++){

            cin>>arr[i][j];
        }
    }

    //printing the output;

    for(int i=0;i<=m-1;i++){

        for(int j=0;j<=n-1;j++){

            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;

}