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

    int t[n][m];

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            t[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cout<<t[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}