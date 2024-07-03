#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the rows of the matrix : ";
    cin>>n;

    int mat[n][n];

    cout<<"Enter the elements of the matrix : ";

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            if((i==j) || (i+j==n-1)){

                cout<<mat[i][j]<<" ";
            }

            else{

                cout<<"  ";
            }
        }

        cout<<endl;
    }

    return 0;
}