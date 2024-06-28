#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){

            cout<<" ";//to print the space 
        }

        for(int k=1;k<=i;k++){

            cout<<(char)(k+64);// to print the alphabte
        }

        cout<<endl;
    }

    return 0;
}