#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no.of elements in the array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements : ";

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    for(int i=0;i<=n-1;i++){

        bool flag=true;//the element is unique;

        for(int j=0;j<=n-1;j++){

            if(j==i) continue;

            if(arr[i]==arr[j]){

                flag=false;//the element is not unique;
                break;
            }
        }

        if(flag==true){

            cout<<"the unique element is : "<<arr[i]<<" ";
        }
    }

    return 0;
}