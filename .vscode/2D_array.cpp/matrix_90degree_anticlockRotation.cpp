#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the no of rows in the matrix : ";
    cin>>m;

    int n;
    cout<<"Enter the no of columns in the matrix : ";
    cin>>n;

    int mat[m][n];

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>mat[i][j];
        }
    }

    //reverse the matrix

    for(int k=0;k<m;k++){

        int i=0;
        int j=n-1;

        while(i<=j){

             int temp=mat[k][i];
             mat[k][i]=mat[k][j];
             mat[k][j]=temp;
             i++;
             j--;
        }
    }

    //transpose 

    for(int i=0;i<m;i++){

        for(int j=i+1;j<m;j++){

            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }

    //print 

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cout<<mat[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}