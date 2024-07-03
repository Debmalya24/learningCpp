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

    int min_r=0;
    int min_c=0;
    int max_r=m-1;
    int max_c=n-1;

    int count=1;

    while(min_r<=max_r && min_c<=max_c){

        //right

        for(int j=min_c;j<=max_c;j++){

            mat[min_r][j]=count++;
        }

        min_r++;

        if(min_r>max_r || min_c>max_c) break;

        //down;

        for(int i=min_r;i<=max_r;i++){

            mat[i][max_c]=count++;

        }

        max_c--;
        if(min_r>max_r || min_c>max_c) break;

        //left

        for(int j=max_c;j>=min_c;j--){

            mat[max_r][j]=count++;
        }

        max_r--;
        if(min_r>max_r || min_c>max_c) break;

        //top

        for(int i=max_r;i>=min_r;i--){

            mat[i][min_c]=count++;
        }

        min_c++;


    }

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cout<<mat[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}