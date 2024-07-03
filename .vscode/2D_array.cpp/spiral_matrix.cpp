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
    cout<<"Enter the number of columns in the matrix: ";
    cin>>n;

    int mat[m][n];

    for(int i=0;i<=m-1;i++){

        for(int j=0;j<=n-1;j++){

            cin>>mat[i][j];
        }
    }

    int min_row=0;
    int min_column=0;
    int max_row=m-1;
    int max_column=n-1;

    while(min_row <=max_row && min_column<=max_column){

        //right

        for(int j=min_column;j<=max_column;j++){

            cout<<mat[min_row][j]<<" ";
        }

        min_row++;

        if(min_row>max_row || min_column>max_column) break;

        //down

        for(int i=min_row;i<=max_row;i++){

            cout<<mat[i][max_column]<<" ";
        }

        max_column--;

        if(min_row>max_row || min_column>max_column) break;

        //left

        for(int j=max_column;j>=min_column;j--){

            cout<<mat[max_row][j]<<" ";
        }

        max_row--;

        if(min_row>max_row || min_column>max_column) break;

        //top

        for(int i=max_row;i>=min_row;i--){

            cout<<mat[i][min_column]<<" ";
        }

        min_column++;

        
    }

    return 0;
}