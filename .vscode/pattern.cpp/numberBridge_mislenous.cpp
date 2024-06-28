#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"enter the lines : ";
    cin>>n;

    int m=n-1;

        for(int j=1;j<=n;j++){

            cout<<j<<" ";
        }

        for(int k=m;k>=1;k--){

            cout<<k<<" ";
        }

        cout<<endl;

     int nsp=1;

     for(int i=1;i<=m;i++){

        

        for(int j=1;j<=m+1-i;j++){

            cout<<j<<" "; // // to print first half number
            
            
        }

        for(int k=1;k<=nsp;k++){

            cout<<"  ";  // to prit the spaces 
            
        }

        nsp +=2;

        for(int j=m+1-i;j>=1;j--){

            cout<<j<<" "; 
            
             // to print second half number
        }

        cout<<endl;
    }

    return 0;
}