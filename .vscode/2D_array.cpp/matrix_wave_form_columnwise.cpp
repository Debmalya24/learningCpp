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
    cout<<"Enter the no. of columns in the matrix : ";
    cin>>n;

    int matrix[m][n];

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>matrix[i][j];
        }
    }

    //wave form

    for(int j=0;j<=n-1;j++){

        if(j%2==0){

              for(int i=0;i<m;i++){

                cout<<matrix[i][j]<<" ";
            }
        }

        else{

            for(int i=m-1;i>=0;i--){

                cout<<matrix[i][j]<<" ";
            }
        }

        //cout<<endl;
    }

    return 0;
}