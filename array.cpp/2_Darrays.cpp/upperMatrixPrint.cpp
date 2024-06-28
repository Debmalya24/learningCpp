#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void lowerrMatrix(vector<vector<int>>&v,int n){

      for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                        if(i<j){

                                cout<<" ";
                        }

                        else{
                                cout<<v[i][j]<<" ";
                        }
                }

                cout<<endl;
        }

        return ;  
}
void upperMatrix(vector<vector<int>>&v,int n){

        for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                        if(j>=i){

                                cout<<v[i][j]<<" ";
                        }

                        else{
                                cout<<"  ";
                        }
                }

                cout<<endl;
        }

        return ;
}

int main(){

        int n;
        cin>>n;

        vector<vector<int>>v(n,vector<int>(n));

        for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                        cin>>v[i][j];
                }
        }

        upperMatrix(v,n);
        lowerrMatrix(v,n);

        return 0;

                        
                             
}