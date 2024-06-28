#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the numbers of rows : ";
    cin>>n;
    // to print the upper case of the half diamond by the code of star flipped triangle
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){

            cout<<" ";
        }

        for(int k=1;k<=i;k++){

            cout<<"*";
        }

        cout<<endl;
    }

    n-=1;
    //to print the lower case of the half diamond
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){

            cout<<" ";
        }

        for(int m=1;m<=n+1-i;m++){

            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}