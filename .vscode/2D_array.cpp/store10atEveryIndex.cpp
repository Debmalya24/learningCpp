#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the no. of rows in the array : ";
    cin>>m;

    int n;
    cout<<"Enter the no. of columns in the array : ";
    cin>>n;

    int matrix[m][n];

    for(int i=0;i<m;i++ ){

        for(int j=0;j<n;j++){

            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<m;i++ ){

        for(int j=0;j<n;j++){

            matrix[i][j]=10;
        }
    }

    for(int i=0;i<m;i++ ){

        for(int j=0;j<n;j++){

            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    return 0;

}