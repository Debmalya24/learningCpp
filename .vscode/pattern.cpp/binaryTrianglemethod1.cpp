#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a=5;

    for(int i=1;i<=n;i++){

        if(i%2!=0) a=1;// row no is odd;

        else a=0;// row no is even

        for(int j=1;j<=i;j++){

            cout<<a;

            //flipping

            if(a==1) a=0;

            else a=1;
        }

        cout<<endl;
    }

    return 0;
}