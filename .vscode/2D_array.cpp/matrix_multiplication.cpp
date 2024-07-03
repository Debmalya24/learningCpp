#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the number of rows in 1st matrix = ";
    cin>>m;

    int n;
    cout<<"Enter the number of column in 1st matrix = ";
    cin>>n;


    int p;
    cout<<"Enter the number of rows in 2nd matrix = ";
    cin>>p;

    int q;
    cout<<"Enter the number of column in 2nd matrix = ";
    cin>>q;


    if(n==p){

        int a[m][n];
        int b[p][q];

        cout<<"Enter the elements of the 1st matrix : ";

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){

                cin>>a[i][j];
            }
        }

        cout<<"Enter the elements of the 2nd matrix : ";

        for(int i=0;i<p;i++){

            for(int j=0;j<q;j++){

                cin>>b[i][j];
            }
        }

        int res[m][q];

        for(int i=0;i<m;i++){

            for(int j=0;j<q;j++){

                res[i][j]=0;

                for(int k=0;k<=n-1;k++){ 

                    res[i][j]+=a[i][k]*b[k][j];

                }
            }
        }

        //print matrix

        cout<<"The resultant matrix will be : ";

        for(int i=0;i<m;i++){

            for(int j=0;j<q;j++){

                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    else{

        cout<<"Matrix multiplication is not possible ";
    }

    return 0;

}