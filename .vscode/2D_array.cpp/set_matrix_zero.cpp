#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void setZeroes( vector<vector<int>>&v){

    int m=v.size();
    int n=v[0].size();

    vector<bool>row(m,false);
    vector<bool>col(n,false);
    
    //select the rows and col which contain the ele zero

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            if(v[i][j]==0){

                row[i]=true;//contain zero
                col[j]=true;//contain zero
            }
        }
    }

    //set row zero

    for(int i=0;i<m;i++){

        if(row[i]==true){

            for(int j=0;j<n;j++){

                v[i][j]=0;
            }
        }
    }

    //set col zero

    for(int j=0;j<n;j++){

        if(col[j]==true){

            for(int i=0;i<m;i++){

                v[i][j]=0;
            }
        }
    }

    return;
}

int main(){

    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;

    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;

    vector<vector<int>>v(m,vector<int>(n));

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>v[i][j];
        }
    }

    setZeroes(v);

     //print

     for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

           cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}