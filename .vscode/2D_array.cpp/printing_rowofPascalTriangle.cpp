#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;

    vector<vector<int >>v;

    for(int i=0;i<m;i++){

        vector<int>p(i+1);
        v.push_back(p);

        for(int j=0;j<=i;j++){

            if((i==j) || (j==0)){

                v[i][j]=1;
            }
            else{

                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }

    int r;
    cout<<"Enter The rowIndex :";
    cin>>r;


    for(int j=0;j<v[r].size();j++){

        cout<<v[r][j]<<" ";
    }

    return 0;
}