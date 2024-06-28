#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Numbers of lines: ";
    cin>>n;

    int nsp=n-1;  //nsp=>number of spaces
    int nst=1;    //nst=>number of stars

    for(int i=1;i<=n;i++){

        for(int j=1;j<=nsp;j++){

            cout<<" ";//to print space
            
        }

         nsp--;

        for(int k=1;k<=nst;k++){

            cout<<"*";
            
        }

         nst +=2;

        cout<<endl;
    }

    return 0;

    
}