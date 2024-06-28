#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int FindTheRow(vector<vector<int>> &matrix){

    int row=-1;

    int temp=INT16_MIN;

    int column=matrix[0].size()-1;


    for(int i=0;i<matrix.size();i++){

        for(int j=1;j<matrix[i].size();j++){

            matrix[i][j]+=matrix[i][j-1];
        }

        if(matrix[i][column]>temp){

            temp=matrix[i][column];

            row=i;
        }
    }



    return (row+1);
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

    int row=FindTheRow(matrix);

    cout<<row<<endl;

    return 0;
}