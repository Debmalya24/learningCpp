#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int matrixScore(vector<vector<int>> &v){

    int row=v.size();
    int col=v[0].size();

    //making 1st column of all 1's

    for(int i=0;i<row;i++){

        if(v[i][0]==0){

            for(int j=0;j<col;j++){

                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }

    //fip the columns where no_zero >no_one;

    for(int j=0;j<col;j++){

        int no_zero=0;
        int no_one=0;

        for(int i=0;i<row;i++){

            if(v[i][j]==0) no_zero++;
            else no_one++;
        }

        if(no_zero > no_one){

            for(int i=0;i<row;i++){

                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }

    //sum of score after flipping matrics

    int sum=0;

    for(int i=0;i<row;i++){

        int x=1;

        for(int j=col-1;j>=0;j--){

            sum+=v[i][j]*x;
            x*=2;
        }
    }

    return sum;
}

int main(){

    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;

    int n;
    cout<<"Enter the no. of columns : ";
    cin>>n;

    vector<vector<int>>v(m,vector<int>(n));

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>v[i][j];
        }
    }

    cout<<matrixScore(v);

    return 0;
}