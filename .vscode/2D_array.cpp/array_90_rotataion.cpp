#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the no of rows : ";
    cin>>m;

    int n;
    cout<<"Enter the no of columns : ";
    cin>>n;

    int matrix[m][n];

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>matrix[i][j];
        }
    }

    //transpose

    for(int i=0;i<m;i++){

        for(int j=i+1;j<n;j++){

            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    //reverse 

    for(int k=0;k<m;k++){

        int i=0;
        int j=n-1;

        while(i<=j){

            int temp=matrix[k][i];
            matrix[k][i]=matrix[k][j];
            matrix[k][j]=temp;
            i++;
            j--;
        }
    }

    //print matrix 

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cout<<matrix[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;

}