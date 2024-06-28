#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void arrayunion(int arr[],int array[],int m,int n){

    int i=0,j=0;
    while(i<n && j<m){

        if(arr[i]==array[j]){

            if(i>0 && j>0 && arr[i-1]!=arr[i] && array[j-1]!=array[j]){

                cout<<arr[i]<<" ";

            }

            else if(i==0 && j==0 ){

                cout<<arr[i]<<" ";
    
            }
            i++;
            j++;
        }

        else if(arr[i]>array[j]){
            if(  array[j-1]!=array[j]){

                cout<<array[j++]<<" ";
                
            }
        }

        else{

            if( arr[i-1]!=arr[i]){

                cout<<arr[i++]<<" ";
                
            }
        }
    }
    while(i<n){

        if( arr[i-1]!=arr[i]){

                cout<<arr[i++]<<" ";
                
        }

    }

    while(j<m){

        if( array[j-1]!=array[j]){

                cout<<array[j++]<<" ";
                
        }
         
    }
}

int main(){

    int n,m;
    cin>>n>>m;

    int arr[n];

    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    int array[m];

    for(int i=0;i<m;i++){

        cin>>array[i];
    }

    arrayunion(arr,array,n,m);

    return 0;
}