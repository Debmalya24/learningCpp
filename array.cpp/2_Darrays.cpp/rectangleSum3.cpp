#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int rectangleSum(vector<vector<int>> &matrix,int l1,int r1,int l2,int r2){

    for(int i=0;i<matrix.size();i++){

        for(int j=1;j<matrix[i].size();j++){

            matrix[i][j]+=matrix[i][j-1];
        }
    }

    for(int i=1;i<matrix.size();i++){

        for(int j=0;j<matrix[i].size();j++){

            matrix[i][j]+=matrix[i-1][j];
        }
    }

    for(int i=0;i<matrix.size();i++){
        
        for(int j=0;j<matrix[i].size();j++){

            cout<<matrix[i][j]<<" ";
        }cout<<endl;

    }

    int top_sum=0;

    int bottom_left_sum=0;

    int top_bottom_sum=0;


    if(l1!=0) top_sum=matrix[l1-1][r2];

    if(r1!=0) bottom_left_sum=matrix[l2][r1-1];

    if(l1!=0 && r1!=0) top_bottom_sum=matrix[l1-1][r1-1];

    int sum=0;

    sum=matrix[l2][r2]-top_sum-bottom_left_sum+top_bottom_sum;

    return sum;
}

int main(){

    int n,m;
    
    cin>>n>>m;

    vector<vector<int>>matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cin>>matrix[i][j];
        }
    }

    int l1,r1,l2,r2;

    cin>>l1>>r1>>l2>>r2;

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cout<<matrix[i][j]<<" ";
        }cout<<endl;

    }

    int sum=rectangleSum(matrix,l1,r1,l2,r2);

    cout<<"Sum:"<<sum<<endl;

    return 0;

}