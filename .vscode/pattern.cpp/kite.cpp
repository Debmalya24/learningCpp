#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"enter the rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            if(i+j == n+1) cout<<"*"; //print the uppercase one sided diagonal stars

            else if(i==n || j==n) cout<<"*";//print the stars of the n th row and column

            else cout<<" ";//space 
        }

        for(int k=1;k<=n-1;k++){

            if(k==i-1) cout<<"*";//upper case other diagonal stars

            else if(i==n) cout<<"*";//the stars of the nth row

            else cout<<" ";//space
        }

        cout<<endl;
    }

    n--;

    for(int i=1;i<=n;i++){

        cout<<" ";//space

        for(int j=1;j<=n;j++){

            if(i==j) cout<<"*";//lowercase one sided diagonal

            else if(j==n) cout<<"*";//lowercase nth column

            else cout<<" ";//space

        }

        for(int k=1;k<=n-1;k++){

            if(i+k==n) cout<<"*";//lowercase other sided diagonal

            else cout<<" ";//stars
        }

        cout<<endl;
    }

    return 0;
}