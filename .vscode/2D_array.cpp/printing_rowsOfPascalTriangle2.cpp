#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 vector<int>pascal(int rowIndex){

    int m=(rowIndex+1);

    vector<vector<int>>v;

    for(int i=0;i<m;i++){

        vector<int>p(i+1);
        v.push_back(p);

        for(int j=0;j<=i;j++){

            if((i==j) ||(j==0)){

                v[i][j]=1;

            }

            else {

                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }

    return v[rowIndex];
 }

int main(){

    int r;
    cout<<"Enter the rowIndex : ";
    cin>>r;

    vector<int>v=pascal(r);

    for(int j=0;j<v.size();j++){

        cout<<v[j]<<" ";
    }

    return 0;
}