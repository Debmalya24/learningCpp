#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int hourglass(vector<vector<int>>&matrix){

    int sum=0;
    

    for(int i=0;i<matrix.size();i++){

        for(int j=0;j<matrix[i].size();j++){

            sum=matrix[0][0]+matrix[0][1]+matrix[0][2]+matrix[1][1]+matrix[2][0]+matrix[2][1]+matrix[2][2];
        }
    }

    return sum;
}

int main(){
    int m ,n;

    cin>>m>>n;

    vector<vector<int>>matrix(m,vector<int>(n));

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cin>>matrix[i][j];
        }
    }

    int sum=hourglass(matrix);

    cout<<sum<<endl;

    return 0;
}