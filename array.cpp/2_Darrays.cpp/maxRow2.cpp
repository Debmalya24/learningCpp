#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int leftMostOneRow(vector<vector<int>>&v){

    int leftMostOne=-1;
    int maxOneRow=-1;
    int j=v[0].size()-1;

    while(j>=0 && v[0][j]==1){

        leftMostOne=j;
        maxOneRow=0;
        j--;
    }

    // check in the rest of the rows if we find a one left to the left most one

    for(int i=1;i<v.size();i++){

        while(j>=0 && v[i][j]==1){
            leftMostOne=j;

            j--;
            
            maxOneRow=i;

        }
    }

    return maxOneRow;
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>>vec(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cin>>vec[i][j];
        }
    }

    cout<<leftMostOneRow(vec)<<endl;

    return 0;
}