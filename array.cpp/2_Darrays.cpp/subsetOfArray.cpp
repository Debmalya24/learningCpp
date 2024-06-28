#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){

        cin>>array[i];
    }

    int m;
    cin>>m;

    int arr[m];

    for(int i=0;i<m;i++){

        cin>>arr[i];
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(array[i]==arr[j]){

                cout<<array[i]<<" ";
            }
        }
    }


    return 0;
}