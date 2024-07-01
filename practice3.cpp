#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the no. rows of the array : ";
    cin>>m;

    int n;
    cout<<"Enter the no. columns of the array : ";
    cin>>n;

    int matrix[m][n];

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>matrix[i][j];
        }
    }

    //transpose matrix ;

    int t[n][m];


    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            t[i][j]=matrix[j][i];
        }
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

           cout<<t[i][j]<<" ";
        }

        cout<<endl;
    }


    return 0;
}