#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool subSet(int array[],int arr[],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(array[i]==arr[j]){
                break;
            }
            if(j==m){

                return 0;
            }
        }
    }

    return 1;
}


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

    for(int j=0;j<m;j++){
        cin>>array[j];
    }

    n=sizeof(array)/sizeof(array[0]);

    m=sizeof(arr)/sizeof(arr[0]);

    if(subSet(array,arr,n,m)){
        cout<<"arr[] is the subset of array[]"<<endl;
    }
    else{

        cout<<"array[] is the subset of arr[]"<<endl;
    }



    return 0;
}