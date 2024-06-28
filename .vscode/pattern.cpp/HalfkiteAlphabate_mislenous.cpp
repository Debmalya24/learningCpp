#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the lines : ";
    cin>>n;

    int nsp=n-1;

    for(int i=1;i<=n;i++){

        //for space 

        for(int j=1;j<=nsp;j++){

            cout<<" ";
        }

        nsp--;

        //for alphabte half side

        for(int k=i-1;k>=1;k--){

            cout<<(char) (k+65);
        }

        for(int q=1;q<=i;q++){

            cout<<(char) (q+64);
        }

        cout<<endl;
    }

    return 0;
}