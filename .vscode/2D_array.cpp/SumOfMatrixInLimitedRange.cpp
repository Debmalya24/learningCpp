#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the no. of the rows in the array : ";
    cin>>m;

    int n;
    cout<<"Enter the no. of the columns in the array : ";
    cin>>n;

    int matrix[m][n];

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>matrix[i][j];
        }
    }

    int l1;
    cout<<"Enter the given range of starting  rows : ";
    cin>>l1;

    int r1;
    cout<<"Enter the given range of starting  columns : ";
    cin>>r1;

    int l2;
    cout<<"Enter the given range of ending  rows : ";
    cin>>l2;

    int r2;
    cout<<"Enter the given range of ending  columns : ";
    cin>>r2;

    int sum=0;

    for(int i=l1;i<=l2;i++){

        for(int j=r1;j<=r2;j++){

             sum+=matrix[i][j];

        }
    }

    cout<<"the sum is : "<<sum<<" "<<endl;

    return 0;
}