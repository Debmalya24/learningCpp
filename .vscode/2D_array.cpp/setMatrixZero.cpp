#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void  setMatrixZero(vector<vector<int>> &v)
{


    int m=v.size();
    int n=v[0].size();

    bool zeroTh_row=false;
    bool zeroTh_col=false;

    //find zero in the 0th row

    for(int j=0;j<n;j++){

        if(v[0][j]==0){

           zeroTh_row=true;//if there exist in zero
            break;
        }
    }

    //find zero in 0th col

    for(int i=0;i<m;i++){

        if(v[i][0]==0){

            zeroTh_col=true;
            break;

        }
    }

    //Finding zero from 1th row to (m-1) th row , from 1th col to (n-1)th col

    for(int i=1;i<m;i++){

        for(int j=1;j<n;j++){

            if(v[i][j]==0){

                v[i][0]=0;//row vector
                v[0][j]=0;//col vector
            }
        }
    }

    //if there is any zero in (1th col -> n-1 th col)turns the whole colum into zero;(col vector)

    for(int j=1;j<n;j++){

        if(v[0][j]==0){

            for(int i=1;i<m;i++){

                v[i][j]=0;
            }
        }
    }

    //if there is any zero in (1th row -> n-1 th row)turns the whole row into zero;(row vector)

    for(int i=1;i<m;i++){

        if(v[i][0]==0){

            for(int j=1;j<n;j++){

                v[i][j]=0;
            }
        }
    }

    // zeroTh_row

    if( zeroTh_row==true){

        for(int j=0;j<n;j++){

            v[0][j]=0;
        }
    }

    // zeroTh_col

     if( zeroTh_col==true){

        for(int i=0;i<m;i++){

            v[i][0]=0;
        }
    }

    return;
}

int main(){

    int m;
    cout<<"Enter the rows of the matrix : ";
    cin>>m;

    int n;
    cout<<"Enter the column of the matrix : ";
    cin>>n;

    vector<vector<int>>v(m,vector<int>(n));

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>v[i][j];
        }
    }

    setMatrixZero(v);

    //print

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cout<<v[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}