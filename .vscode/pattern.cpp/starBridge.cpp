#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the numbers of lines=> ";
    cin>>n;

    for(int i=1;i<=2*n-1;i++){

        cout<<"*";  //to print *******
    }

    cout<<endl;

    int m=n-1;

    int nsp=1;

    for(int i=1;i<=m;i++){

        for(int j=1;j<=m+1-i;j++){

            cout<<"*"; // to print the first part of the stars 
        }

        for(int k=1;k<=nsp;k++){

            cout<<" "; // tp print space 
        }

        nsp +=2;

        for(int j=1;j<=m+1-i;j++){

            cout<<"*"; // to print the second part of the stars 
                    
        }

        cout<<endl;

    }

    return 0;


}