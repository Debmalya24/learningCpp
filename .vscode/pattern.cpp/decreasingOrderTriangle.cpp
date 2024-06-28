#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"enter the number of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=i;j>=1;j--){

            cout<<j<<" ";//to print the number in dreceasing order
        }

        cout<<endl;
    }

    return 0;
}