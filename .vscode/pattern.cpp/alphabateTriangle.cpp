#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Numbers of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){

            cout<<(char)(j+64)<<" "; //to print the number of arrows
        }

        cout<<endl;
    }

    return 0;
}