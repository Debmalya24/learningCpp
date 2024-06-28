#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. elements of the array : ";
    cin>>n;


    int arr[n];

    cout<<"The elements are : ";

    for(int i=0;i<=n-1;i++){

        cin>>arr[i];
    }

    bool flag=false; //false=>there is no missing elements.
    int x=1;

    for(int i=0;i<=n-1;i++){

        if(arr[i]<=0) continue;

        if(x!= arr[i]){

            cout<<x<<" "<<endl;
            flag=true;
            break;
        }

        else{
            x++;
        }
    }

    if(flag==false) {

        cout<<"there is no element missing in the sorting array";
    }

    return 0;
}