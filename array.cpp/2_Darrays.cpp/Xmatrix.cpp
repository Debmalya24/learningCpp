#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool perfectMatrix(vector<vector<int>>&v){

        int n=v.size();

        for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                        if(i==j){ // main diagonal 

                                if(v[i][j]==0){

                                        return false;
                                }
                        }

                        else if(i+j==n-1){ // secondary diagonal 

                                if(v[i][j]==0){

                                        return false;
                                }
                        }

                        else{        // the elements without diagonal should ne zero

                                if(v[i][j] !=0){ 

                                        return false;
                                }
                        }

                }
        }

        return true;
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

        if(perfectMatrix(v)){

                cout<<"true";
        }
        else{

                cout<<"false";
        }

        return 0;                    
}