#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the no. of rows in the matrix : ";
    cin>>m;

    int n;
    cout<<"Enter the no. of column in the matrix : ";
    cin>>n;

    int mat[m][n];

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>mat[i][j];
        }
    }

    //wave form

    for(int j=0;j<=n-1;j++){

        if(j%2==0){

            for(int i=m-1;i>=0;i--){

                cout<<mat[i][j]<<" ";
            }
        }

        else{

            for(int i=0;i<=m-1;i++){

                cout<<mat[i][j]<<" ";
            }
        }
    }

    return 0;


}