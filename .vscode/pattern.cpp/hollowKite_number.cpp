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

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            if(i+j==n+1) cout<<i<<" ";//numbers

            else cout<<"  ";//space
        }

        for(int k=1;k<=n-1;k++){

            if(k==i-1) cout<<i<<" ";//numbers

            else cout<<"  ";//space
        }

        cout<<endl;
    }

    return 0;
}