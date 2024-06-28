#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

     int m;
    cout<<"Enter the number of rows in the matrix: ";
    cin>>m;

    int n;
    cout<<"Enter the number of column in the matrix: ";
    cin>>n;

    int arr[m][n];

    //taking input

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>arr[i][j];
        }
    }

    int sum=0;

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            sum+=arr[i][j];
        }
    }

    cout<<"The sum of the array elements are : "<<sum<<" "<<endl;

    return 0;
}