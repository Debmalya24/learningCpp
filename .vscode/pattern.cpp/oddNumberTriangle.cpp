#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        int a=1;

        for(int j=1;j<=i;j++){

            cout<<a<<" ";
            a=a+2;
        }

        cout<<endl;
    }

    return 0;
}