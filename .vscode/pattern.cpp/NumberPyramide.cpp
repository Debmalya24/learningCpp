#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of the rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){

            cout<<"  ";//to print space
        }

        int x=i;
        int y=2*i-2;

        for(int k=1;k<=i;k++){

            cout<<x<<" ";//to print the first n  elements
            x++;
        }

        for(int m=n+1;m<=n+i-1;m++){

            cout<<y<<" ";//to print the next elements
            y--;
        }
        cout<<endl;
    }

    return 0;


}