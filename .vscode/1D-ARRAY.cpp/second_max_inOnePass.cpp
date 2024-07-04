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

    int max=INT16_MIN;
    int s_max=INT16_MIN;

    for(int i=0;i<=n-1;i++){

        if(arr[i]>max){

            s_max=max;
            max=arr[i];
        }

        else if(arr[i]<max && arr[i]>s_max){

            s_max=arr[i];
        }
    }

    cout<<"the maximum element will be : "<<max<<" "<<endl;
    cout<<"the second  maximum element will be : "<<s_max<<" "<<endl;

    return 0;

}